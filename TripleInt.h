//
// Created by Cheex on 1/26/2025.
//

#ifndef TRIPLEINT_H
#define TRIPLEINT_H

#include <iostream>

int main () {
    int userInput;
    std::cout <<"Please enter an integer: ";
    std::cin >> userInput;

    int tripleInput = userInput * 3;

    std::cout << "the tripled value is: " << tripleInput << std::endl;
    return 0;
}

#endif //TRIPLEINT_H
