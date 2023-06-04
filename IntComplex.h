#ifndef INTCOMPLEX_H // it means that the header file has not been included before, and the subsequent code should be processed.
#define INTCOMPLEX_H //marking it as defined to indicate that the header file has been included.

class IntComplex {
private:
    int real;         // Private member variable to store the real part of the complex number
    int imaginary;    // Private member variable to store the imaginary part of the complex number

public:
    IntComplex();    // Default constructor declaration
    IntComplex(int realPart, int imaginaryPart);    // Constructor with parameters declaration
    int getReal() const;    // Getter function for the real part of the complex number
    int getImaginary() const;    // Getter function for the imaginary part of the complex number

    // Overloaded arithmetic operators for complex number operations
    IntComplex operator+(const IntComplex& other) const;
    IntComplex operator-(const IntComplex& other) const;
    IntComplex operator*(const IntComplex& other) const;
    IntComplex operator/(const IntComplex& other) const;

    void print() const;    // Function to print the complex number
};

#endif // End of INTCOMPLEX_H
