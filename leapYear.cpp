// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Oct 2019
// This is program finds out if it's a leap year

#include <iostream>
#include <string>

main() {
    // This will calculate if leap year

    // variables
    int year;
    std::string leapYear = " is not";

    // Welcome statement
    std::cout << "Welcome, I will tell you if it’s a leap year." << std::endl;
    std::cout << "Press Enter to continue." << std::endl;
    std::cin.ignore();

    // input
    std::cout << "What is the year: " << std::endl;
    std::cin >> year;

    // process & output
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                leapYear = " is";
        } else {
            leapYear = " is";
        }
    }
    std::cout << year << leapYear << " a leap year." << std::endl;
}
