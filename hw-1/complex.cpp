#include "complex.h"
#include <cmath>

Complex::Complex(void) {
    real = 0.0; 
    imag = 0.0;
}

Complex::Complex(float re, float im) {
    real = re; 
    imag = im;
}

Complex::~Complex(){}

Complex Complex::conj() { 
    return Complex(real, -imag); 
}
 
float Complex::abs() { 
    return sqrt(real*real + imag*imag); 
}

float Complex::norm() { 
    return real*real + imag*imag; 
}

Complex Complex::operator+ () const {
    return Complex(real, imag);
}

Complex Complex::operator- () const {
    return Complex(-real, -imag);
}

const Complex& Complex::operator = (const Complex& z) 
{  
    real = z.real; 
    imag = z.imag; 
    return *this;
} 


Complex Complex::operator + (const Complex& z) const { 
    return Complex(real + z.real, imag + z.imag);
} 
 
Complex Complex::operator -(const Complex& z) const { 
    return Complex(real - z.real, imag - z.imag);
}

Complex Complex::operator * (const Complex& z) const { 
    float a, b;
    a = real*z.real - imag*z.imag;
    b = real*z.imag + imag*z.real;
    return Complex (a, b); 
} 

Complex Complex::operator / (Complex z) const {
    float a = (real*z.real + imag*z.imag) / z.norm();
    float b = (imag*z.real - real*z.imag) / z.norm();
    return Complex (a, b);
}

Complex Complex::operator + (float a) const {
    return Complex(real+a, imag);
}

Complex Complex::operator - (float a) const {
    return Complex(real - a, imag);
}

Complex Complex::operator * (float a) const {
    return Complex(real*a, imag*a);
}

Complex Complex::operator / (float a) const {
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


/////////////
const Complex& Complex::operator *= (const Complex& z) { 
    float a = real*z.real - imag*z.imag; 
    float b = real*z.imag + imag*z.real; 
    real = a;
    imag = b;
    return *this;
} 
 
const Complex& Complex::operator /= (Complex z) { 
    float a = (real*z.real + imag*z.imag) / z.norm();
    float b = (real*z.imag - imag*z.real) / z.norm();
    real = a;
    imag = b;
    return *this;
} 

 
bool Complex::operator == (Complex z) {
    if ((real - z.real < EPSILON() && imag - z.imag < EPSILON())&&(real==z.real && imag == z.imag)) {
        return true;
    } else {
        return false;
    }
}

bool Complex::operator != (Complex z) {  
    if (real - z.real > EPSILON() || imag - z.imag > EPSILON()) { 
       return true; 
    } else {  
        return false;
    }
}

bool Complex::operator > (Complex z) {  
    if (norm() > z.norm()) { 
        return true; 
    } else {  
        return false;
    }
}

bool Complex::operator >= (Complex z) {  
    if (norm() >= z.norm()) { 
        return true; 
    } else {  
        return false;
    }
}

bool Complex::operator < (Complex z) {  
    if (norm() < z.norm()) { 
        return true; 
    } else {  
        return false;
    }
}

bool Complex::operator <= (Complex z) {  
    if (norm() <= z.norm()) { 
        return true; 
    } else {  
        return false;
    }
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
    Complex  x = (a + 0*i)/z;
    return x;
}

std::ostream& operator << (std::ostream& stream,  Complex z) {  
    if (z.imag < 0) 
        stream << z.real << " + i(" << z.imag << ")\n"; 
    else 
        stream << z.real << " + i" << z.imag << "\n"; 
    return stream;
} 
 
std::istream& operator >> (std::istream& input,  Complex z) {   
    std::cout << "Enter Re-part:  ";
    input >> z.real; 
    std::cout << "Enter Re-part:  "; 
    input >> z.imag;
    return input; 
}

 


  