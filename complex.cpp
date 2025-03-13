#include <iostream>
#include <cmath>     // For sqrt
#include "ComplexNumber.h"  // Include header for class definition

ComplexNumber::ComplexNumber(float r, float i) : real(r), imag(i) {}

ComplexNumber ComplexNumber::add(const ComplexNumber& other) const {
    return ComplexNumber(real + other.real, imag + other.imag);
}

ComplexNumber ComplexNumber::subtract(const ComplexNumber& other) const {
    return ComplexNumber(real - other.real, imag - other.imag);
}

ComplexNumber ComplexNumber::negate() const {
    return ComplexNumber(-real, -imag);
}

ComplexNumber ComplexNumber::multiply(const ComplexNumber& other) const {
    return ComplexNumber(real * other.real - imag * other.imag,
        real * other.imag + imag * other.real);
}

ComplexNumber ComplexNumber::divide(const ComplexNumber& other) const {
    float denom = other.real * other.real + other.imag * other.imag;
    return ComplexNumber((real * other.real + imag * other.imag) / denom,
        (imag * other.real - real * other.imag) / denom);
}

float ComplexNumber::magnitude() const {
    return std::sqrt(real * real + imag * imag);
}

ComplexNumber ComplexNumber::conjugate() const {
    return ComplexNumber(real, -imag);
}

void ComplexNumber::prettyPrint() const {
    std::cout << real << " + " << imag << "i" << std::endl;
}

float ComplexNumber::realPart() const {
    return real;
}

float ComplexNumber::imagPart() const {
    return imag;
}