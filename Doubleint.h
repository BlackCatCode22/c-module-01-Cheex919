//
// Created by Cheex on 1/26/2025.
//

#include <iostream>

int main () {
  int userInput;
  std::cout <<"Please enter an integer: ";
  std::cin >> userInput;

  int doubleInput = userInput * 2;

  std::cout << "the doubled value is: " << doubleInput << std::endl;
  return 0;
  }