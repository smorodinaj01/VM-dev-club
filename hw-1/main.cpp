#include "complex.h"
#include <cassert>

 
void DefaultConstructor(){
    Complex z;
    assert(0 == z.real);
    assert(0 == z.imag);
    std::cout << "Test 1 OK" << std::endl;
}

void Constructor(){
    Complex z = Complex(5,-2);
    assert(5 == z.real);
    assert(-2 == z.imag);
    std::cout << "Test 2 OK" << std::endl;
}

void Assignment(){
    Complex z;
    z = 2 + 3*i;
    assert(2 == z.real);
    assert(3 == z.imag);
    std::cout << "Test 3 OK" << std::endl;
}

void AssignmentInput(){
    float a, b;
    std::cout << "Enter Re-part: "; 
    std::cin >> a;
    std::cout << "Enter Im-part: ";
    std::cin >> b;

    Complex z = a + b*i;
    assert(a == z.real);
    assert(b == z.imag);

    Complex x = Complex(a, b);
    assert(a == x.real);
    assert(b == x.imag);
    std::cout << "Test 4 OK" << std::endl;
}


void Conjugate() {
    Complex z = 1 + 2*i;
    Complex c = z.conj();
    assert(1 == c.real);
    assert(-2 == c.imag);
    std::cout << "Test 5 OK" << std::endl;
}


void Module() {
    Complex z = 3 + 4*i;
    assert(5 == z.abs());
    std::cout << "Test 6 OK" << std::endl;
}


void Norm() {
    Complex z = 3 + 3*i;
    assert(18 == z.norm());
    std::cout << "Test 7 OK" << std::endl;
}


void AddComplex() {
    Complex z1 = 1 + 1*i;
    Complex z2 = 2 - 1*i;
    Complex z3 = z1 + z2;
    assert(3 == z3.real);
    assert(0 == z3.imag);
    std::cout << "Test 8 OK" << std::endl;
}


void PlusEqual() {
    Complex z1 = 1 + 1*i;
    Complex z2 = 2 - 1*i;
    z2 += z1;
    assert(3 == z2.real);
    assert(0 == z2.imag);
    std::cout << "Test 9 OK" << std::endl;
}


void AddFloat() {
    Complex z1 = 1 + 1*i;
    float f = 5.0;
    Complex z2 = z1 + f;
    assert(6 == z2.real);
    assert(1 == z2.imag);
    std::cout << "Test 10 OK" << std::endl;
}

void SubtractComplex() {
    Complex z1 = 1 + 1*i;
    Complex z2 = 2 - 1*i;
    Complex z3 = z1 - z2;
    assert(-1 == z3.real);
    assert(2 == z3.imag);
    std::cout << "Test 11 OK" << std::endl;
}


void  MinusEqual() {
    Complex z1 = 1.0 + 1.0*i;
    Complex z2 = 2.0 - 1.0*i;
    z2 -= z1;
    assert(1.0 == z2.real);
    assert(-2.0 == z2.imag);
    std::cout << "Test 12 OK" << std::endl;
}

void  SubtractFloat() {
    Complex z1 = 1 + 1*i;
    float f = 5.0;
    Complex z2 = z1 - f;
    assert(-4 == z2.real);
    assert(1 == z2.imag);
    std::cout << "Test 13 OK" << std::endl;
}


void CheckNegative() {
    Complex z1 = 1 + 1*i;
    Complex z2 = -1*z1;
    assert(-1 == z2.real);
    assert(-1 == z2.imag);
    std::cout << "Test 14 OK" << std::endl;
}

void MultiplyComplex() {
    Complex z1 = 2 + 3*i;
    Complex z2 = 2 - 2*i;
    Complex z3 = z1*z2;
    assert(10 == z3.real);
    assert(2 == z3.imag);
    std::cout << "Test 15 OK" << std::endl;
}


void MultiplyFloat() {
    Complex z1 = 2 + 3*i;
    float f = 3.0;
    Complex z3 = z1*f;
    assert(6 == z3.real);
    assert(9 == z3.imag);
    std::cout << "Test 16 OK" << std::endl;
}


void DivideComplex() {
    Complex z1 = 20 - 6*i;
    Complex z2 = 2 + 2*i;
    Complex z3 = z1/z2;
    assert(3.5 == z3.real);
    assert(-6.5 == z3.imag);
    std::cout << "Test 17 OK" << std::endl;
}


void DivideFloat() {
    Complex z1 = 20 - 6*i;
    float f = 2.0;
    Complex z3 = z1/f;
    assert(10 == z3.real);
    assert(-3 == z3.imag);
    std::cout << "Test 18 OK" << std::endl;
}


void DivideFloatByComplex() {
    Complex z1 = 1 + i;
    float f = 5.0;
    Complex z3 = f/z1;
    assert(2.5 == z3.real);
    assert(-2.5 == z3.imag);
    std::cout << "Test 19 OK" << std::endl;
}


void Equal() {
    Complex z1 = 1 + 2*i;
    Complex z2 = 1 + 2*i;
    assert(z1==z2);
    std::cout << "Test 20 OK" << std::endl;
}


void NotEqual() {
    Complex z1 = 1 + 2*i;
    Complex z2 = 1 - 2*i;
    assert(z1!=z2);
    std::cout << "Test 21 OK" << std::endl;
}

void Less() {
    Complex z1 = 2 + 3*i;
    Complex z2 = 4 - 5*i;
    assert(z1<z2);
    std::cout << "Test 22 OK" << std::endl;
}

void LessEqual() {
    Complex z1 = 2 + 3*i;
    Complex z2 = 4 - 5*i;
    assert(z1<=z2);
    z2 = z1;
    assert(z1<=z2);
    std::cout << "Test 23 OK" << std::endl;
}

void Larger() {
    Complex z1 = 10 + 2*i;
    Complex z2 = 1 - 5*i;
    assert(z1>z2);
    std::cout << "Test 24 OK" << std::endl;
}

void LargerEqual() {
    Complex z1 = 10 + 0*i;
    Complex z2 = 1 - 2*i;
    assert(z1>=z2);
    z1 = z2;
    assert(z1>=z2);
    std::cout << "Test 25 OK" << std::endl;
}
 

int main(){
    DefaultConstructor();
    Constructor();
    Assignment();
    AssignmentInput();
    Conjugate();
    Module();
    Norm();
    AddComplex(); 
    PlusEqual(); 
    AddFloat();
    SubtractComplex();
    MinusEqual();
    SubtractFloat(); 
    CheckNegative();
    MultiplyComplex();
    MultiplyFloat();
    DivideComplex();
    DivideFloat();
    DivideFloatByComplex(); 
    Equal(); 
    NotEqual();
    Larger();
    LargerEqual();
 
    return 0;
}

 