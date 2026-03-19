#include <iostream>

int main()
{
    // define an integer variable named x
    int x {5}; // this variable is uninitialized because we haven't given it a value

    // print the value of x to the screen
    std::cout << "tu numero es:" << x << '\n'; // who knows what we'll get, because x is uninitialized

    return 0;
}// This program prints the C++ language standard your compiler is currently using
