#pragma once

#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

class ComplexNumber {
private:
    float real;
    float imag;

public:
    ComplexNumber(float r, float i);
    float realPart() const;
    float imagPart() const;
    ComplexNumber add(const ComplexNumber& other) const;
    ComplexNumber subtract(const ComplexNumber& other) const;
    ComplexNumber negate() const;
    ComplexNumber multiply(const ComplexNumber& other) const;
    ComplexNumber divide(const ComplexNumber& other) const;
    float magnitude() const;
    ComplexNumber conjugate() const;
    void prettyPrint() const;
    float realPart() const;  
    float imagPart() const;
};

#endif // COMPLEXNUMBER_H
