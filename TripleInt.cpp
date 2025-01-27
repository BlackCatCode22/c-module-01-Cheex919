//
// Created by Cheex on 1/26/2025.
//

#include "TripleInt.h"
#include <iostream>

int main () {
    int userInput;
    std::cout <<"Please enter an integer: ";
    std::cin >> userInput;

    int doubleInput = userInput * 3;

    std::cout << "the tripled value is: " << doubleInput << std::endl;
    return 0;
}