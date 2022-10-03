#include "complex.h"
#include <cmath>

Complex::Complex() {
    real = 0.0; 
    imag = 0.0;
}

Complex::Complex(float re, float im) {
    real = re; 
    imag = im;
}


Complex::Complex(const Complex &other) {
    real = other.real;
    imag = other.imag;
}

Complex::~Complex(){}

Complex Complex::conj() const { 
    return Complex(real, -imag); 
}
 
float Complex::module() const { 
    return sqrt(real*real + imag*imag); 
}

float Complex::norm() const { 
    return real*real + imag*imag; 
}



Complex Complex::operator + () const {
    return Complex(real, imag);
}

Complex Complex::operator - () const {
    return Complex(-real, -imag);
}

Complex Complex::operator = (const Complex& z) {  
    real = z.real; 
    imag = z.imag; 
    return Complex(real, imag);
} 

Complex Complex::operator + (const Complex& z) const { 
    return Complex(real + z.real, imag + z.imag);
} 
 
Complex Complex::operator - (const Complex& z) const { 
    return Complex(real - z.real, imag - z.imag);
}

Complex Complex::operator * (const Complex& z) const { 
    return Complex (real*z.real - imag*z.imag, real*z.imag + imag*z.real); 
} 

Complex Complex::operator / (const Complex& z) const {
    return Complex ((real*z.real + imag*z.imag) / z.norm(), (imag*z.real - real*z.imag) / z.norm());
}

Complex Complex::operator + (const float& a) const {
    return Complex(real+a, imag);
}

Complex Complex::operator - (const float& a) const {
    return Complex(real - a, imag);
}

Complex Complex::operator * (const float& a) const {
    return Complex(real*a, imag*a);
}

Complex Complex::operator / (const float& a) const {
    return Complex(real/a, imag/a);
}

const Complex& Complex::operator += (const Complex& z) {
    real += z.real;
    imag += z.imag;
    return *this;
}

const Complex& Complex::operator -= (const Complex& z) {
    real -= z.real;
    imag -= z.imag;
    return *this;
}

const Complex& Complex::operator *= (const Complex& z) { 
    float a = real*z.real - imag*z.imag; 
    imag = real*z.imag + imag*z.real; 
    real = a;
    return *this;
} 
 
const Complex& Complex::operator /= (const Complex& z) { 
    float a = (real*z.real + imag*z.imag) / z.norm();
    imag = (real*z.imag - imag*z.real) / z.norm();
    real = a;
    return *this;
} 

 
bool Complex::operator == (const Complex& z) const {
    if (abs(real - z.real) < EPSILON && abs(imag - z.imag) < EPSILON) {
        return true;
    }
    return false;
}

bool Complex::operator != (const Complex& z) const {  
    if (abs(real - z.real) >  EPSILON || abs(imag - z.imag) > EPSILON) { 
       return true; 
    } 
    return false;
}

bool Complex::operator > (const Complex& z) const {  
    if (norm() > z.norm()) { 
        return true; 
    }
    return false;
}

bool Complex::operator >= (const Complex& z) const{  
    if (norm() >= z.norm()) { 
        return true; 
    } 
    return false;
}

bool Complex::operator < (const Complex& z) const {  
    if (norm() < z.norm()) { 
        return true; 
    }
    return false;
}

bool Complex::operator <= (const Complex& z) const {  
    if (norm() <= z.norm()) { 
        return true; 
    } 
    return false;
}

Complex operator + (float a, Complex z) {
    return Complex(a + z.real, z.imag);
}

Complex operator - (float a, Complex z) {
    return Complex(a - z.real, -z.imag);
}

Complex operator * (float a, Complex z) {
    return Complex(a * z.real, a * z.imag);
}

Complex operator / (float a, Complex z) {
    return Complex(a*z.real/z.norm(), a*z.imag/ z.norm());
}

 


  