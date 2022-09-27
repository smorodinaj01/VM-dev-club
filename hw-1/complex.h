#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H
 
#include <iostream>
#include <cmath>
 
const float EPSILON = pow(10, -7);

struct Complex 
{
    float real;
    float imag;

    Complex(void);
    Complex(float, float);	
    ~Complex();

    Complex conj(void);
    Complex conj(Complex);
    float abs(void);
    float abs(Complex);
    float norm(void);
    float norm(Complex);
  
    const Complex& operator = (const Complex&);

    Complex operator + (Complex);  
    Complex operator - (Complex);    
    Complex operator * (Complex);
    Complex operator / (Complex);

    Complex operator + (float);
    Complex operator - (float);
    Complex operator * (float);
    Complex operator / (float);

    const Complex& operator += (const Complex&);
    const Complex& operator -= (const Complex&);
    const Complex& operator *= (const Complex&); 
    const Complex& operator /= (const Complex&);
   
    bool operator == (Complex);  
    bool operator != (Complex);

    // оператор сравнения по модулю...
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

static Complex i = Complex(0.0, 1.0);

#endif
