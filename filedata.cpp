#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // For std::isalpha

// Function to count vowels in a string
int countVowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (std::isalpha(c)) {
            char lc = std::tolower(c);
            if (lc == 'a' || lc == 'e' || lc == 'i' || lc == 'o' || lc == 'u') {
                count++;
            }
        }
    }
    return count;
}

// Function to count words in a string
int countWords(const std::string& str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (std::isalpha(c)) {
            if (!inWord) {
                inWord = true;
                count++;
            }
        } else {
            inWord = false;
        }
    }
    return count;
}

// Function to reverse a string
std::string reverseString(const std::string& str) {
    std::string reversed;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

// Function to capitalize the second letter of each word
std::string capitalizeSecondLetter(const std::string& str) {
    std::string result;
    bool capitalizeNext = true;
    for (char c : str) {
        if (std::isalpha(c)) {
            if (capitalizeNext) {
                result += std::toupper(c);
                capitalizeNext = false;
            } else {
                result += c;
            }
        } else {
            result += c;
            capitalizeNext = true;
        }
    }
    return result;
}

int main() {
    // Read the text file
    std::ifstream inputFile("your_text_file.txt");
    if (!inputFile) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    std::string fileData;
    std::string line;
    while (std::getline(inputFile, line)) {
        fileData += line;
    }

    // Calculate and output the number of vowels
    int vowelCount = countVowels(fileData);
    std::cout << "Number of vowels: " << vowelCount << std::endl;

    // Calculate and output the number of words
    int wordCount = countWords(fileData);
    std::cout << "Number of words: " << wordCount << std::endl;

    // Reverse the statement and output
    std::string reversedStatement = reverseString(fileData);
    std::cout << "Reversed statement: " << reversedStatement << std::endl;

    // Capitalize the second letter of each word and output
    std::string capitalizedStatement = capitalizeSecondLetter(fileData);
    std::cout << "Capitalized statement: " << capitalizedStatement << std::endl;

    return 0;
}
