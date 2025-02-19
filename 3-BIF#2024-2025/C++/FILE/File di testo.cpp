/*Crea un programma o uno script da utilizzare in seguito nel modo più semplice possibile in python che dato un file .cpp, .txt o anche .py, chieda tramite un menu se 1. cambiare da MAIUSCOLE a minuscole e viceversa automaticamente. Ovviamente il carattere deve essere chiesto da tastiera; 2. riformattare il testo automaticamente di un file di qualsiasi estensione*/

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

void toUpperCase(std::string &str) {
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
}

void toLowerCase(std::string &str) {
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
}

void toggleCase(std::string &str) {
    for (char &c : str) {
        if (std::isupper(c)) {
            c = std::tolower(c);
        } else if (std::islower(c)) {
            c = std::toupper(c);
        }
    }
}

void reformatText(std::string &str) {
    // Example reformatting: trim leading/trailing spaces and replace multiple spaces with a single space
    str.erase(str.begin(), std::find_if(str.begin(), str.end(), [](unsigned char ch) { return !std::isspace(ch); }));
    str.erase(std::find_if(str.rbegin(), str.rend(), [](unsigned char ch) { return !std::isspace(ch); }).base(), str.end());
    std::string::iterator new_end = std::unique(str.begin(), str.end(), [](char lhs, char rhs) { return (lhs == rhs) && (lhs == ' '); });
    str.erase(new_end, str.end());
}

void processFile(const std::string &filename, int option) {
    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    std::string line;
    std::string content;
    while (std::getline(inputFile, line)) {
        content += line + "\n";
    }
    inputFile.close();

    switch (option) {
        case 1:
            toggleCase(content);
            break;
        case 2:
            reformatText(content);
            break;
        default:
            std::cerr << "Invalid option" << std::endl;
            return;
    }

    std::ofstream outputFile(filename);
    if (!outputFile) {
        std::cerr << "Error opening file for writing: " << filename << std::endl;
        return;
    }
    outputFile << content;
    outputFile.close();
}

int main() {
    std::string filename;
    int option;

    std::cout << "Enter the filename: ";
    std::cin >> filename;
    std::cout << "Choose an option:\n1. Toggle case\n2. Reformat text\n";
    std::cin >> option;

    processFile(filename, option);

    return 0;
}