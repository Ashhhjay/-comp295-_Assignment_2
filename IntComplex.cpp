#include "IntComplex.h"
#include <iostream>
using namespace std;

IntComplex::IntComplex() : real(0), imaginary(0) {}
// Default constructor that initializes both real and imaginary parts to zero

IntComplex::IntComplex(int realPart, int imaginaryPart) : real(realPart), imaginary(imaginaryPart) {}
// Constructor with parameters that sets the values of real and imaginary parts

int IntComplex::getReal() const {
    return real;
}
// Getter function to retrieve the value of the real part

int IntComplex::getImaginary() const {
    return imaginary;
}
// Getter function to retrieve the value of the imaginary part

IntComplex IntComplex::operator+(const IntComplex& other) const {
    int sumReal = real + other.real;
    int sumImaginary = imaginary + other.imaginary;
    return IntComplex(sumReal, sumImaginary);
}
// Overloaded addition operator to perform addition of two complex numbers

IntComplex IntComplex::operator-(const IntComplex& other) const {
    int diffReal = real - other.real;
    int diffImaginary = imaginary - other.imaginary;
    return IntComplex(diffReal, diffImaginary);
}
// Overloaded subtraction operator to perform subtraction of two complex numbers

IntComplex IntComplex::operator*(const IntComplex& other) const {
    int mulReal = (real * other.real) - (imaginary * other.imaginary);
    int mulImaginary = (real * other.imaginary) + (imaginary * other.real);
    return IntComplex(mulReal, mulImaginary);
}
// Overloaded multiplication operator to perform multiplication of two complex numbers

IntComplex IntComplex::operator/(const IntComplex& other) const {
    int denominator = (other.real * other.real) + (other.imaginary * other.imaginary);
    int divReal = ((real * other.real) + (imaginary * other.imaginary)) / denominator;
    int divImaginary = ((imaginary * other.real) - (real * other.imaginary)) / denominator;
    return IntComplex(divReal, divImaginary);
}
// Overloaded division operator to perform division of two complex numbers

void IntComplex::print() const {
    cout << real << " + " << imaginary << "i" << endl;
}
// Function to print the complex number in the format: "real + imaginary i"

