#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H
 
#include <iostream>
#include <cmath> 

struct Complex {
    float real;
    float imag;
    static float EPSILON() {
        return  pow(10, -7);
    }

    Complex();
    Complex(float, float);	
    ~Complex();

    Complex conj();
    float abs();
    float norm();

    const Complex& operator = (const Complex&);

    Complex operator+ () const;
    Complex operator- () const;

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

    // операторы сравнения по модулю
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

static Complex i = Complex (0.0, 1.0);

#endif
