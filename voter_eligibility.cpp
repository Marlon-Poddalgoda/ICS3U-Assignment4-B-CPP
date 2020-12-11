// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on December 2020
// This program determines if a user is eligible to vote

#include <iostream>
#include <string>


int main() {
    // This function determines if a user is eligible to vote

    std::cout << "This program determines if you are "
              << "eligible to vote." << std::endl;

    // variable declarations
    const int MIN_VOTE_AGE = 18;
    std::string userInput;
    int userInputInt;

    // input
    std::cout << "Enter your age here: ";
    std::cin >> userInput;
    std::cout << "" << std::endl;

    // process
    try {
        userInputInt = std::stoi(userInput);

        if (userInputInt > 0) {
            if (userInputInt >= MIN_VOTE_AGE) {
                // output
                std::cout << "You are eligible to vote, "
                          << "congrats!" << std::endl;
            } else {
                // output
                std::cout << "Sorry, you must be at least "
                          << MIN_VOTE_AGE << " years old "
                          << "to vote." << std::endl;
            }
        } else {
            // output
            std::cout << userInputInt << " is not a positive number! Try again."
                      << std::endl;
        }
    } catch (std::invalid_argument) {
        // output
        std::cout << "'" << userInput << "' isn't a number! "
                  << "Try again." << std::endl;
    }
}
