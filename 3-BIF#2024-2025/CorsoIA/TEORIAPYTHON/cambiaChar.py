import os


def change_case(file_path):
    with open(file_path, 'r') as file:
        content = file.read()

    new_content = ""
    for char in content:
        if char.islower():
            new_content += char.upper()
        elif char.isupper():
            new_content += char.lower()
        else:
            new_content += char

    with open(file_path, 'w') as file:
        file.write(new_content)


def reformat_text(file_path):
    with open(file_path, 'r') as file:
        content = file.read()

    new_content = ' '.join(content.split())

    with open(file_path, 'w') as file:
        file.write(new_content)


def main():
    file_path = input("Inserisci il percorso del file (.cpp, .txt, .py): ")

    if not os.path.isfile(file_path):
        print("Il file non esiste.")
        return

    print("Menu:")
    print("1. Cambiare da MAIUSCOLE a minuscole e viceversa")
    print("2. Riformattare il testo")

    choice = input("Scegli un'opzione (1 o 2): ")

    if choice == '1':
        change_case(file_path)
        print("Il caso del testo è stato cambiato con successo.")
    elif choice == '2':
        reformat_text(file_path)
        print("Il testo è stato riformattato con successo.")
    else:
        print("Scelta non valida.")


if __name__ == "__main__":
    main()
