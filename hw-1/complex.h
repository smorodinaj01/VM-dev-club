#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H
 
#include <iostream>
#include <cmath>

struct Complex {
    float real;
    float imag;

    const float EPSILON = pow(10, -7);

    Complex();
    Complex(float, float);	
    ~Complex();

    Complex conj();
    float abs();
    float norm();
    float module(float, float);

    const Complex& operator = (const Complex&);

    Complex operator + () const;
    Complex operator - () const;

    Complex operator + (const Complex&) const;  
    Complex operator - (const Complex&) const;    
    Complex operator * (const Complex&) const;
    Complex operator / (Complex) const;

    Complex operator + (float) const;
    Complex operator - (float) const;
    Complex operator * (float) const;
    Complex operator / (float) const;

    const Complex& operator += (const Complex&);
    const Complex& operator -= (const Complex&);
    const Complex& operator *= (const Complex&); 
    const Complex& operator /= (Complex);
   
    bool operator == (Complex);  
    bool operator != (Complex);

    bool operator >  (Complex); 
    bool operator >= (Complex); 
    bool operator <  (Complex); 
    bool operator <= (Complex); 

};

std::istream& operator >> (std::istream&, Complex); 
std::ostream& operator << (std::ostream&, Complex); 

Complex operator + (float, Complex);
Complex operator - (float, Complex);
Complex operator * (float, Complex);
Complex operator / (float, Complex);

#endif
