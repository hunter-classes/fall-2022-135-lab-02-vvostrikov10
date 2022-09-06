/*
Author: Vladislav Vostrikov
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab02 main.cpp

Tests the print_interval function from funcs.cpp
*/

#include <iostream>
#include "funcs.h"

int main(){
    std::cout << "Interval [-5,10):" << std::endl;
    print_interval(-5, 10);
    std::cout << "Interval [1,2):" << std::endl;
    print_interval(1, 2);
    std::cout << "Interval [1,1) shouldn't print anything:" << std::endl;
    print_interval(1, 1);
    std::cout << "Interval [100,115):" << std::endl;
    print_interval(100, 115);
    std::cout << "Interval [5,-10) shouldn't print anything:" << std::endl;
    print_interval(5, -10);


}