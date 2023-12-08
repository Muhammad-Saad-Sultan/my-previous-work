#include "Lab_Task_3_Header.h"
#include <iostream>

using namespace std;

// Constructors
Complex::Complex(int r, int i) 
{
    real = r;
    imag = i;
}

// Destructor
Complex::~Complex() 
{
    cout << "Memory is released." << endl;
}

// Getter and Setter
int Complex::getReal() const
{
    return real;
}

void Complex::setReal(int r)
{
    real = r;
}

int Complex::getImag() const
{
    return imag;
}

void Complex::setImag(int i)
{
    imag = i;
}

// Overloaded addition operator
Complex Complex::operator+(const Complex &other) const
{
    Complex result;
    result.real = real + other.real;
    result.imag = imag + other.imag;
    return result;
}

// Overloaded subtraction operator
Complex Complex::operator-(const Complex &other) const
{
    Complex result;
    result.real = real - other.real;
    result.imag = imag - other.imag;
    return result;
}

// Overloaded multiplication operator
Complex Complex::operator*(const Complex &other) const
{
    Complex result;
    result.real = real * other.real - imag * other.imag;
    result.imag = real * other.imag + imag * other.real;
    return result;
}

// Overloaded division operator
Complex Complex::operator/(const Complex &other) const
{
    Complex result;
    int denominator = other.real * other.real + other.imag * other.imag;
    result.real = (real * other.real + imag * other.imag) / denominator;
    result.imag = (imag * other.real - real * other.imag) / denominator;
    return result;
}
