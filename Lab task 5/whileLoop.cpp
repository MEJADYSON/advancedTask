#include <iostream>
#include <limits>

int main() {
    int number;
    bool validInput = false;

    while (!validInput) {
        std::cout << "Enter an integer: ";
        if (std::cin >> number) {
            if((number<5 || number > 10))
            {
            	std::cout << "you entered "<< number << " Please enter a number between 5 and 10 "<< std::endl;
			}
			else
            validInput = true;
        } 
		else {
            // Input is not an integer
            std::cout << "Error: Invalid input. Please enter an integer." << std::endl;
            // to avoid infinite loop on invalid input
            std::cin.clear();
            // Ignore any remaining characters in the input buffer up to newline
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    std::cout << "You entered: " << number << std::endl;

    return 0;
}
