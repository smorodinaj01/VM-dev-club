#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H
 
#include <iostream>

struct Complex {
    float real;
    float imag;
    static constexpr float EPSILON = 0.0000001;

    Complex();
    Complex(float, float);	
    Complex(const Complex& other);
    ~Complex();

    Complex conj() const;
    float module() const;
    float norm() const;

    Complex operator = (const Complex&);

    Complex operator + () const;
    Complex operator - () const;

    Complex operator + (const Complex&) const;  
    Complex operator - (const Complex&) const;    
    Complex operator * (const Complex&) const;
    Complex operator / (const Complex&) const;

    Complex operator + (const float&) const;
    Complex operator - (const float&) const;
    Complex operator * (const float&) const;
    Complex operator / (const float&) const;


    const Complex& operator += (const Complex&);
    const Complex& operator -= (const Complex&);
    const Complex& operator *= (const Complex&); 
    const Complex& operator /= (const Complex&);
   
   
    bool operator == (const Complex&) const;  
    bool operator != (const Complex&) const;

    bool operator >  (const Complex&) const; 
    bool operator >= (const Complex&) const; 
    bool operator <  (const Complex&) const; 
    bool operator <= (const Complex&) const; 
};

Complex operator + (float, Complex);
Complex operator - (float, Complex);
Complex operator * (float, Complex);
Complex operator / (float, Complex);

#endif
