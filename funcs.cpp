/*
Author: Vladislav Vostrikov
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab02 main.cpp

Contains print_interval function which prints the interval in range [L,U)
*/

#include <iostream>

void print_interval(int L, int U){
    for(int i=L; i<U; i++){
        std::cout << i;
        if (i!=U-1){
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}