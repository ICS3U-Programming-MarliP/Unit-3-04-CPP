// Copyright Marli Peters 2023 All rights reserved.
// Created By: Marli Peters
// Date: Oct. 23, 2023
// This program asks the user for a number then
// tells them if the number is positive or negative.

#include <cstdlib>
#include <iostream>

int main() {
    // get user input
    int number;

    std::cout << "Enter integer: ";
    std::cin >> number;
    std::cout << "";

    // check number
    if (number > 0) {
        std::cout << "Your number is positive!";
    } else if (number < 0) {
        std::cout << "Your number is negative!";
    } else {
        std::cout << "0 is just 0!";
    }
}
