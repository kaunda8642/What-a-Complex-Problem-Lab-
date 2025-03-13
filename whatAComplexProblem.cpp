// whatAComplexProblem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>  // Include the string header for to_string()

class ComplexNumber {
private:
    double real;
    double imaginary;
public:
    ComplexNumber(double r, double i) {
        real = r;
        imaginary = i;
    }

    std::string prettyPrint() {
        return std::to_string(real) + " + " + std::to_string(imaginary) + "i";
    }
};

int main()
{
    ComplexNumber a(1.5, 2.7);
    std::cout << a.prettyPrint() << std::endl;

    return 0;
}


