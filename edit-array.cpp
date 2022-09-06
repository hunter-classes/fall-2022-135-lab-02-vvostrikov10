/*
Author: Vladislav Vostrikov
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab02 main.cpp

Creates a size 10 array myData and allows user to edit it until the user tries to edit
an index that is out of bounds
*/

#include <iostream>

void print_array(int* arr, int size){
    std::cout << std::endl;
    for (int i = 0; i < size; i++){
        std::cout << arr[i];
        if (i != size - 1){
            std::cout << " ";
        }
    }
    std::cout << std::endl;
    std::cout << std::endl;
}

int main(){
    int size = 10;
    int myData [size];
    for (int i = 0; i < 10; i++){
        myData[i] = 1;
    }
    int ind = 0;
    int val = 1;
    do{
        myData[ind] = val;
        print_array(myData, size);
        std::cout << "Input index: ";
        std::cin >> ind;
        std::cout << "Input value: ";
        std::cin >> val;
    } while(ind >= 0 && ind < 10);
    std::cout << "Index out of range. Exit." << std::endl;
    return 0;
}