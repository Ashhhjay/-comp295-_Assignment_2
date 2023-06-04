#ifndef FLOATCOMPLEX_H
#define FLOATCOMPLEX_H

#include "IntComplex.h" // Include the header file for the IntComplex class

class FloatComplex : public IntComplex { // Declare the FloatComplex class, which inherits from IntComplex
private:
    float real;         // Private member variable to store the real part of the complex number
    float imaginary;    // Private member variable to store the imaginary part of the complex number

public:
    FloatComplex();    // Default constructor declaration
    FloatComplex(float realPart, float imaginaryPart);    // Constructor with parameters declaration
    float getReal() const;    // Getter function for the real part of the complex number
    float getImaginary() const;    // Getter function for the imaginary part of the complex number

    // Overloaded arithmetic operators for complex number operations
    FloatComplex operator+(const FloatComplex& other) const;
    FloatComplex operator-(const FloatComplex& other) const;
    FloatComplex operator*(const FloatComplex& other) const;
    FloatComplex operator/(const FloatComplex& other) const;

    void print() const;    // Function to print the complex number
};

#endif
