#include <iostream>
#include <string>
#include <cctype>
#include <string>
#include <cctype>

class Encryptor
{
};

int main() {
    std::cout << "Mini Encryption/Decryption App\n";
    
    Encryptor encryptor = Encryptor();

    std::string phrase;
    int key;
    char choice;

    std::cout << "Enter a phrase: ";
    std::getline(std::cin, phrase);

    std::cout << "Enter an integer key value: ";
    while (!(std::cin >> key)) {
        std::cout << "Invalid input! Please enter an integer key: ";
        std::cin.clear();

    }

    std::cout << "Press 'e' to Encrypt or 'd' to Decrypt: ";
    std::cin >> choice;

    if (choice == 'e' || choice == 'E') {
        std::string encrypted = encryptor.encrypt(phrase, key);
        std::cout << "Encrypted phrase: " << encrypted << "\n";
    }
    else if (choice == 'd' || choice == 'D') {
        std::string decrypted = encryptor.decrypt(phrase, key);
        std::cout << "Decrypted phrase: " << decrypted << "\n";
    }
    else {
        std::cout << "Invalid choice! Program terminated.\n";
    }

    return 0;
}
