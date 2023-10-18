// Created by: Finn Kitor
// Date: October 17th, 2023
// this program checks if the number the user inputted is a positive, negative, or zero.

#include <iostream>
// the user inputs the number, including negatives
int main() {
    int number;
    std::cout << "Enter any number: ";
    std::cin >> number;
    std::cout << std::endl;
    // the terminal will tell the user if the number is positive, negative, or zero
    if (number > 0) {
        std::cout << "the number is a positive number" << std::endl;
    } else if (number == 0) {
        std::cout << "the number is zero" << std::endl;
    } else {
        std::cout << "the number is a negative number" << std::endl;
    }

    return 0;
}