/*Scrivere una funzione che riceve come parametro una stringa s e un carattere c e
restituisce la frequenza di c in s, cioè il numero di occorrenze di cin s.
Svolgilo con:
 gli array di char
 le stringhe utilizzando find
 le stringhe senza find*/

#include <string>
#include <cstring>

int frequencyWithCharArray(const char *s, char c)
{
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }
    return count;
}

int frequencyWithStringFind(const std::string &s, char c)
{
    int count = 0;
    size_t pos = s.find(c);
    while (pos != std::string::npos)
    {
        count++;
        pos = s.find(c, pos + 1);
    }
    return count;
}

int frequencyWithStringNoFind(const std::string &s, char c)
{
    int count = 0;
    for (char i : s)
    {
        if (i == c)
        {
            count++;
        }
    }
    return count;
}