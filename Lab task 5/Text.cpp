#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

// Function to count vowels in a string
int countVowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (std::tolower(c) == 'a' || std::tolower(c) == 'e' || std::tolower(c) == 'i' || std::tolower(c) == 'o' || std::tolower(c) == 'u') {
            count++;
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
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return count;
}

// Function to reverse a string
std::string reverse(const std::string& str) {
    return std::string(str.rbegin(), str.rend());
}

// Function to capitalize the second letter of each word
std::string capitalizeSecondLetter(const std::string& str) {
    std::string result = str;
    bool capitalizeNext = false;
    for (char& c : result) {
        if (std::isalpha(c)) {
            if (capitalizeNext) {
                c = std::toupper(c);
                capitalizeNext = false;
            } else {
                capitalizeNext = true;
            }
        } else {
            capitalizeNext = false;
        }
    }
    return result;
}

int main() {
    std::ifstream file("textfile.txt");
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file." << std::endl;
        return 1;
    }

    std::string fileData;
    std::getline(file, fileData);

    // Count vowels
    int vowelsCount = countVowels(fileData);
    std::cout << "Number of vowels: " << vowelsCount << std::endl;

    // Count words
    int wordsCount = countWords(fileData);
    std::cout << "Number of words: " << wordsCount << std::endl;

    // Reverse the statement
    std::string reversedStatement = reverse(fileData);
    std::cout << "Reversed statement: " << reversedStatement << std::endl;

    // Capitalize second letter of each word
    std::string capitalizedStatement = capitalizeSecondLetter(fileData);
    std::cout << "Capitalized statement: " << capitalizedStatement << std::endl;

    file.close();
    return 0;
}
