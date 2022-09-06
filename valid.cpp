/*
Author: Vladislav Vostrikov
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab02 valid.cpp

Asks a user for an integer, keeps asking until the user inputs a number in range 0<n<100
then prints n^2
*/

#include <iostream>
int main(){

  int n;
  std::cout << "Please enter an integer: ";
  std::cin >> n;
  while (n <= 0 || n >= 100){
		std::cout << "Please re-enter: ";
		std::cin >> n;
  }
	std::cout << "\nNumber squared is " << n*n << std::endl;
  return 0;
}
