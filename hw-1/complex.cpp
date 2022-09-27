#include "complex.h"
#include <cmath>
 
 
Complex::Complex(void) {
    real = 0.0; 
    imag = 0.0;
}

Complex::Complex(float r) {
    real = r; 
    imag = 0.0;
}

Complex::Complex(float re, float im) {
    real = re; 
    imag = im;
}

Complex::~Complex(){}

 
float Complex::re(void) { 
    return(this->real); 
}
 
float Complex::im(void) { 
    return(this->imag); 
}

float re(Complex z) { 
    return z.re(); 
}

float im(Complex z) { 
    return z.im(); 
}

Complex Complex::conj(void) { 
    return Complex(this->real, -this->imag); 
}

Complex conj(Complex z) { 
    return Complex(z.re(),-z.im()); 
}

float Complex::abs(void) { 
    return sqrt(real*real+imag*imag); 
}

float abs(Complex z) { 
    return sqrt(z.re()*z.re()+z.im()*z.im()); 
}

float Complex::norm(void) { 
    return real*real + imag*imag; 
}

float norm(Complex z) { 
    return z.re()*z.re()+z.im()*z.im(); 
}

/////////////////////

  
const Complex& Complex::operator = (Complex z) 
{  
    this->real = z.real; 
    this->imag = z.imag; 
    return *this;
}  
 
Complex Complex::operator+(Complex z) 
{ 
    this->real = this->real + z.real; 
    this->imag = this->imag + z.imag; 
    return *this;
} 
 
Complex Complex::operator-(Complex z) 
{ 
    this->real = this->real - z.real; 
    this->imag = this->imag - z.imag; 
    return *this;
}

Complex Complex::operator * (Complex z) {  
    float a, b;  
    a = real * z.real - imag * z.imag; 
    b = real * z.imag + z.real * imag; 
    real = a; 
    imag = b; 
    return *this; 
} 
 

Complex Complex::operator/(Complex z)
{
  Complex top((*this)*z.conj());
  double bottom(z.norm());
  Complex res(top/bottom);
  return res;
}

//////////////////////

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
///////////////////////

Complex& Complex::operator += (Complex z) {
    this->real += z.real;
    this->imag += z.imag;
    return *this;
}

Complex& Complex::operator -= (Complex z) {
    this->real -= z.real;
    this->imag -= z.imag;
    return *this;
}
 
Complex& Complex::operator *= (Complex z) { 
    this->real *= z.real; 
    this->imag *= z.imag; 
    return *this;
} 
 
Complex& Complex::operator /= (Complex z) { 
    this->real /= z.real; 
    this->imag /= z.imag; 
    return *this;
} 
 
////////////////////////////// 
 
bool Complex::operator == (Complex z) {
    if (this->real == z.real && this->imag == z.imag) {
        return true;
    } else {
        return false;
    }
}

bool Complex::operator != (Complex z) {  
    if (this->real != z.real || this->imag != z.imag) { 
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

//////////////////////////
Complex operator + (float a, Complex z) {
    return Complex(a+z.re(), z.im());
}

Complex operator - (float a, Complex z) {
    return Complex(a-z.re(), -z.im());
}

Complex operator * (float a, Complex z) {
    return Complex(a*z.re(), a*z.im());
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

 


  