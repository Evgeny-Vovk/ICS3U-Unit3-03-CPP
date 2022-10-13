// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : October 2022
// ICS3U-Unit3-03.cpp File, learning if...then...else... statements in C++.

#include <iostream>
#include <random>

int main() {
    // creating variables
    int randomNumber;
    int guessNumber;

    // random generator
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);

    // input
    std::cout << "Guess the number from 0 to 9: ";
    std::cin >> guessNumber;

    // process and output
    if (randomNumber == guessNumber) {
        std::cout << "\nYou guessed right.";
    } else {
        std::cout << "\nYou guessed wrong, the number was "
        << randomNumber << ".";
    }

    std::cout << "\n\n\nDone.\n";
}
