/*
Author: Vladislav Vostrikov
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab02 valid.cpp

Prints the first 59 Fibonacci numbers 
*/

#include <iostream>

int main(){
  int fib[60];
  fib[0] = 0;
  std::cout << fib[0] << std::endl;
  fib[1] = 1;
  std::cout << fib[1] << std::endl;
  for (int i = 2; i < 60; i++){
    fib[i] = fib[i-1] + fib[i-2];
    std::cout << fib[i] << std::endl;
  }
  //at a certain point the fibonacci values overflow due to integer type being too small to hold the later values
}
