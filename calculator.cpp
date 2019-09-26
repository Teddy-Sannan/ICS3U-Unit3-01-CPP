// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Teddy Sannan
// Created on: September 2019
// This program calculates the surface area of a cone

#include <iostream>

int main() {
    // variable declaration
    int firstNumber;
    int secondNumber;
    int calculation;
    // input
    std::cout << "Enter your first number: ";
    std::cin >> firstNumber;
    std::cout << "Enter your second number: ";
    std::cin >> secondNumber;
    // process
    calculation = firstNumber + secondNumber;
    // output
    std::cout << "" << std::endl;
    std::cout << (firstNumber) << " + " << (secondNumber) << " = "
              << (calculation) <<std::endl;
}
