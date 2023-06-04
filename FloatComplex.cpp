//Faizan Ahmad
//241608482
#include "FloatComplex.h"
#include <iostream>
using namespace std;

FloatComplex::FloatComplex() : IntComplex(), real(0.0f), imaginary(0.0f) {}
// Default constructor that initializes the base class (IntComplex) and sets the real and imaginary parts to zero

FloatComplex::FloatComplex(float realPart, float imaginaryPart) : IntComplex(0, 0), real(realPart), imaginary(imaginaryPart) {}
// Constructor with parameters that sets the base class (IntComplex) to zero and sets the values of real and imaginary parts

float FloatComplex::getReal() const {
    return real;
}
// Getter function to retrieve the value of the real part

float FloatComplex::getImaginary() const {
    return imaginary;
}
// Getter function to retrieve the value of the imaginary part
    
FloatComplex FloatComplex::operator+(const FloatComplex& other) const {
    float sumReal = real + other.real;
    float sumImaginary = imaginary + other.imaginary;
    return FloatComplex(sumReal, sumImaginary);
}
// Overloaded addition operator to perform addition of two complex numbers



FloatComplex FloatComplex::operator-(const FloatComplex& other) const {
    float diffReal = real - other.real;
    float diffImaginary = imaginary - other.imaginary;
    return FloatComplex(diffReal, diffImaginary);
}
// Overloaded subtraction operator to perform subtraction of two complex numbers

FloatComplex FloatComplex::operator*(const FloatComplex& other) const {
    float mulReal = (real * other.real) - (imaginary * other.imaginary);
    float mulImaginary = (real * other.imaginary) + (imaginary * other.real);
    return FloatComplex(mulReal, mulImaginary);
}
// Overloaded multiplication operator to perform multiplication of two complex numbers

FloatComplex FloatComplex::operator/(const FloatComplex& other) const {
    float denominator = (other.real * other.real) + (other.imaginary * other.imaginary);
    float divReal = ((real * other.real) + (imaginary * other.imaginary)) / denominator;
    float divImaginary = ((imaginary * other.real) - (real * other.imaginary)) / denominator;
    return FloatComplex(divReal, divImaginary);
}
// Overloaded division operator to perform division of two complex numbers

void FloatComplex::print() const {
    cout << real << " + " << imaginary << "i" << endl;
}
// Function to print the complex number in the format: "real + imaginary i"

