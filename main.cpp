//Faizan Ahmad
//241608482
#include <iostream> // Include the necessary header files
#include <cstdlib>
#include "IntComplex.h"
#include "FloatComplex.h"
#include <iomanip>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 8) { // Check if there are sufficient command-line arguments
        cout << "insufficient argument" << endl; // Display an error message
        return 1; // Return with an error code
    }

    // storing value in variables
    int intReal1 = atoi(argv[1]); // Convert the first argument to an integer
    int intImaginary1 = atoi(argv[2]); // Convert the second argument to an integer
    int intReal2 = atoi(argv[3]); // Convert the third argument to an integer
    int intImaginary2 = atoi(argv[4]); // Convert the fourth argument to an integer
    float floatReal1 = atof(argv[5]); // Convert the fifth argument to a float
    float floatImaginary1 = atof(argv[6]); // Convert the sixth argument to a float
    float floatReal2 = atof(argv[7]); // Convert the seventh argument to a float
    float floatImaginary2 = atof(argv[8]); // Convert the eighth argument to a float

    IntComplex intComplex1(intReal1, intImaginary1); // Create the first integer complex number
    IntComplex intComplex2(intReal2, intImaginary2); // Create the second integer complex number
    FloatComplex floatComplex1(floatReal1, floatImaginary1); // Create the first float complex number
    FloatComplex floatComplex2(floatReal2, floatImaginary2); // Create the second float complex number

    // Print the integer complex numbers
    cout << "First Integer Complex Number:" << endl;
    intComplex1.print();
    cout << "Second Integer Complex Number:" << endl;
    intComplex2.print();
    cout << "First Float Complex Number:" << endl;
    floatComplex1.print();
    cout << "Second Float Complex Number:" << endl;
    floatComplex2.print();

    // Perform operations and print the results for Integer Complex
    IntComplex intSum = intComplex1 + intComplex2; // Add the integer complex numbers
    IntComplex intSubtraction = intComplex1 - intComplex2; // Subtract the integer complex numbers
    IntComplex intMultiplication = intComplex1 * intComplex2; // Multiply the integer complex numbers

    cout << "\n\t\t\tInteger Complex Results:\n" << endl;
    cout << "Sum of complex numbers: ";
    intSum.print();
    cout << "Subtraction of complex numbers: ";
    intSubtraction.print();
    cout << "Multiplication of complex numbers: ";
    intMultiplication.print();

    cout << "Division of complex numbers: ";
    if (intComplex2.getReal() == 0 && intComplex2.getImaginary() == 0) { // check if denominator real and imaginary number are zero or not
        cout << "Error: Division by zero is not allowed." << endl;
    } else {
        IntComplex intDivision = intComplex1 / intComplex2; // Divide the integer complex numbers
        intDivision.print();
    }

    // Perform operations and print the results for Float Complex
    FloatComplex floatSum = floatComplex1 + floatComplex2; // Add the float complex numbers
    FloatComplex floatSubtraction = floatComplex1 - floatComplex2; // Subtract the float complex numbers
    FloatComplex floatMultiplication = floatComplex1 * floatComplex2; // Multiply the float complex numbers

    cout << "\n\t\t\tFloat Complex Results:\n" << endl;
    cout << fixed << setprecision(2); // Set the precision to two decimal places

    cout << "Sum of complex numbers: ";
    floatSum.print();
    cout << "Subtraction of complex numbers: ";
    floatSubtraction.print();
    cout << "Multiplication of complex numbers: ";
    floatMultiplication.print();

    cout << "Division of complex numbers: ";
    if (floatComplex2.getReal() == 0.0 && floatComplex2.getImaginary() == 0.0) { // check if denominator real and imaginary number are zero or not
        cout << "Error: Division by zero is not allowed." << endl;
    } else {
        FloatComplex floatDivision = floatComplex1 / floatComplex2; // Divide the float complex numbers
        floatDivision.print();
    }

    return 0; 
}

