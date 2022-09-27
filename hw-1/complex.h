#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H
 
#include <iostream>
#include <cmath>
 
struct Complex {
private:
    float real;
    float imag;

public:
    Complex(void);
    Complex(float);
    Complex(float, float);	
    ~Complex();
 
    float re(void);
    float im(void);
    float re(Complex);
    float im(Complex);

    Complex conj(void);
    Complex conj(Complex);
    float abs(void);
    float abs(Complex);
    float norm(void);
    float norm(Complex);
  
    // Оператор присваивания
    const Complex& operator = (Complex);    // было без конст

    Complex operator + (Complex);  
    Complex operator - (Complex);    
    Complex operator * (Complex);
    Complex operator / (Complex);


    Complex operator + (float);
    Complex operator - (float);
    Complex operator * (float);
    Complex operator / (float);

    Complex& operator += (Complex);
    Complex& operator -= (Complex);
    Complex& operator *= (Complex); 
    Complex& operator /= (Complex);
   
    bool operator == (Complex);  
    bool operator != (Complex);

    // оператор сравнения по модулю...
    bool operator >  (Complex); 
    bool operator >= (Complex); 
    bool operator <  (Complex); 
    bool operator <= (Complex); 

    friend std::istream& operator >> (std::istream&, Complex); 
    friend std::ostream& operator << (std::ostream&, Complex); 
};


Complex operator + (float, Complex);
Complex operator - (float, Complex);
Complex operator * (float, Complex);
Complex operator / (float, Complex);

static Complex i = Complex(0.0, 1.0);

#endif
