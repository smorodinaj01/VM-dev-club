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

Complex Complex::conj(void) { 
    return Complex(this->real, -this->imag); 
}

Complex conj(Complex z) { 
    return Complex(z.real, -z.imag); 
}

float Complex::abs(void) { 
    return sqrt(real*real + imag*imag); 
}

float abs(Complex z) { 
    return sqrt(z.real*z.real + z.imag*z.imag); 
}

float Complex::norm(void) { 
    return real*real + imag*imag; 
}

float norm(Complex z) { 
    return z.real*z.real + z.imag*z.imag; 
}


const Complex& Complex::operator = (const Complex& z) 
{  
    this->real = z.real; 
    this->imag = z.imag; 
    return *this;
} 

 

Complex Complex::operator + (Complex z) { 
    return Complex(this->real + z.real, this->imag + z.imag);
} 
 
Complex Complex::operator -(Complex z) { 
    return Complex(this->real - z.real, this->imag - z.imag);
}

Complex Complex::operator * (Complex z) { 
    float a, b;
    a = real*z.real - imag*z.imag;
    b = real*z.imag + imag*z.real;
    return Complex (a, b); 
} 

Complex Complex::operator / (Complex z) {
    Complex top((*this)*z.conj());
    float bottom(z.norm());
    Complex res(top/bottom);
    return res;
}

Complex Complex::operator + (float a) {
    return Complex(this->real+a, this->imag);
}

Complex Complex::operator - (float a) {
    return Complex(this->real - a, this->imag);
}

Complex Complex::operator * (float a) {
    return Complex(real*a, imag*a);
}

Complex Complex::operator / (float a) {
    return Complex(this->real/a, this->imag/a);
}

const Complex& Complex::operator += (const Complex& z) {
    this->real += z.real;
    this->imag += z.imag;
    return *this;
}

const Complex& Complex::operator -= (const Complex& z) {
    this->real -= z.real;
    this->imag -= z.imag;
    return *this;
}
 
const Complex& Complex::operator *= (const Complex& z) { 
    this->real *= z.real; 
    this->imag *= z.imag; 
    return *this;
} 
 
const Complex& Complex::operator /= (const Complex& z) { 
    this->real /= z.real; 
    this->imag /= z.imag; 
    return *this;
} 
 
bool Complex::operator == (Complex z) {
    if ((this->real - z.real < EPSILON) && (this->imag - z.imag) < EPSILON) {
        return true;
    } else {
        return false;
    }
}

bool Complex::operator != (Complex z) {  
    if ((this->real - z.real) > EPSILON || (this->imag - z.imag) > EPSILON) { 
       return true; 
    } else {  
        return false;
    }
}

bool Complex::operator > (Complex z) {  
    if (this->norm() > z.norm()) { 
        return true; 
    } else {  
        return false;
    }
}

bool Complex::operator >= (Complex z) {  
    if (this->norm() >= z.norm()) { 
        return true; 
    } else {  
        return false;
    }
}

bool Complex::operator < (Complex z) {  
    if (this->norm() < z.norm()) { 
        return true; 
    } else {  
        return false;
    }
}

bool Complex::operator <= (Complex z) {  
    if (this->norm() <= z.norm()) { 
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
    Complex top((a)*z.conj());
    float bottom(z.norm());
    Complex res(top/bottom);
    return res;
}


std::ostream& operator << (std::ostream& stream,  Complex z) {  
    if (z.imag < 0) 
        stream << z.real << " + i(" << z.imag << ")\n"; 
    else 
        stream << z.real << " + i" << z.imag << "\n"; 
    return stream;
} 
 
std::istream& operator >> (std::istream& input,  Complex z) {   
    std::cout << "Enter Re-part of number:  ";
    input >> z.real; 
    std::cout << "Enter Re-part of number:  "; 
    input >> z.imag;
    return input; 
}

 


  