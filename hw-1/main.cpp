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
    z = 24.5*i;
    c = z.conj();
    assert(0 == c.real);
    assert(-24.5 == c.imag);
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

void UnaryPlus(){
    Complex z1 = 3 + 4*i;
    Complex z2 = +z1;
    assert(z2 == 3 + 4*i);

    z1 = 0 + 0*i;
    z2 = -z1;
    assert(z2 == 0 + 0*i);
    std::cout << "Test 8 OK" << std::endl;
}

void UnaryMinus(){
    Complex z1 = 3 + 4*i;
    Complex z2 = -z1;
    assert(z2 == -3 - 4*i);

    z1 = 4*i;
    z2 = -z1;
    assert(z2 == -4*i);

    z1 = 0 + 0*i;
    z2 = -z1;
    assert(z2 == 0 + 0*i);
    std::cout << "Test 9 OK" << std::endl;
}

void PlusFloat() {
    Complex z1 = 1 + 1*i;
    float f = 5.0;
    Complex z2 = z1 + f;
    assert(6 == z2.real);
    assert(1 == z2.imag);
    std::cout << "Test 10 OK" << std::endl;
}

void MinusFloat() {
    Complex z1 = 1 + 1*i;
    float f = 5.0;
    Complex z2 = z1 - f;
    assert(-4 == z2.real);
    assert(1 == z2.imag);
    std::cout << "Test 11 OK" << std::endl;
}

void MultiplyFloat() {
    Complex z1 = 2 + 3*i;
    float f = 3.0;
    Complex z3 = z1*f;
    assert(6 == z3.real);
    assert(9 == z3.imag);
    std::cout << "Test 12 OK" << std::endl;
}

void DivideFloat() {
    Complex z1 = 20 - 6*i;
    float f = 2.0;
    Complex z3 = z1/f;
    assert(10 == z3.real);
    assert(-3 == z3.imag);
    std::cout << "Test 13 OK" << std::endl;
}

void PlusComplex() {
    Complex z1 = 1 + 1*i;
    Complex z2 = 2 - 1*i;
    Complex z3 = z1 + z2;
    assert(3 == z3.real);
    assert(0 == z3.imag);
    std::cout << "Test 14 OK" << std::endl;
}

void MinusComplex() {
    Complex z1 = 1 + 1*i;
    Complex z2 = 2 - 1*i;
    Complex z3 = z1 - z2;
    assert(-1 == z3.real);
    assert(2 == z3.imag);
    std::cout << "Test 15 OK" << std::endl;
}

void MultiplyComplex() {
    Complex z1 = 2 + 3*i;
    Complex z2 = 2 - 2*i;
    Complex z3 = z1*z2;
    assert(10 == z3.real);
    assert(2 == z3.imag);
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

void PlusEqual() {
    Complex z1 = 1 + 1*i;
    Complex z2 = 2 - 1*i;
    z2 += z1;
    assert(3 == z2.real);
    assert(0 == z2.imag);
    std::cout << "Test 18 OK" << std::endl;
}

void MinusEqual() {
    Complex z1 = 1.0 + 1.0*i;
    Complex z2 = 2.0 - 1.0*i;
    z2 -= z1;
    assert(1.0 == z2.real);
    assert(-2.0 == z2.imag);
    std::cout << "Test 19 OK" << std::endl;
}

void MultiplyEqual() {
    Complex z1 = 1 + 2*i;
    Complex z2 = 2 - 4*i;
    z1 *= z2;
    assert(10 == z1.real);
    assert(0 == z1.imag);

    z2 = 2 - 1*i;
    z1 *= z2;
    assert(20 == z1.real);
    assert(-10 == z1.imag);
    std::cout << "Test 20 OK" << std::endl;
}

void DevideEqual() {
    Complex z1 = 2 - 4*i;
    Complex z2 = 1 - 1*i;
    z1 /= z2;
    assert(3 == z1.real);
    assert(1 == z1.imag);
    std::cout << "Test 21 OK" << std::endl;
}

void FloatPlusComplex() {
    float f = 29;
    Complex z = -120 + 7*i;
    Complex ans = f + z;
    assert(149 == ans.real);
    assert(7 == ans.imag);
    std::cout << "Test 22 OK" << std::endl;
}
    
void FloatMinusComplex() {
    float f = 14;
    Complex z = -12 + 7*i;
    Complex ans = f - z;
    assert(26 == ans.real);
    assert(-7 == ans.imag);
    std::cout << "Test 23 OK" << std::endl;
}

void FloatMultiplyComplex() {
    float a = 4;
    Complex z = -12 + 7*i;
    Complex ans = a * z;
    assert(-48 == ans.real);
    assert(28 == ans.imag);
    std::cout << "Test 24 OK" << std::endl;
}

void DivideFloatByComplex() {
    float f = 5.0;
    Complex z1 = 1 + i;
    Complex z2 = f/z1;
    assert(2.5 == z2.real);
    assert(-2.5 == z2.imag);
    std::cout << "Test 25 OK" << std::endl;
}

void Equal() {
    Complex z1 = 1 + 2*i;
    Complex z2 = 1 + 2*i;
    assert(z1==z2);
    std::cout << "Test 26 OK" << std::endl;
}

void NotEqual() {
    Complex z1 = 1 + 2*i;
    Complex z2 = 1 - 2*i;
    assert(z1!=z2);
    std::cout << "Test 27 OK" << std::endl;
}

void Less() {
    Complex z1 = 2 + 3*i;
    Complex z2 = 4 - 5*i;
    assert(z1<z2);
    std::cout << "Test 28 OK" << std::endl;
}

void LessEqual() {
    Complex z1 = 2 + 3*i;
    Complex z2 = 4 - 5*i;
    assert(z1<=z2);
    z2 = z1;
    assert(z1<=z2);
    std::cout << "Test 29 OK" << std::endl;
}

void Larger() {
    Complex z1 = 10 + 2*i;
    Complex z2 = 1 - 5*i;
    assert(z1>z2);
    std::cout << "Test 30 OK" << std::endl;
}

void LargerEqual() {
    Complex z1 = 10 + 0*i;
    Complex z2 = 1 - 2*i;
    assert(z1>=z2);
    z1 = z2;
    assert(z1>=z2);
    std::cout << "Test 31 OK" << std::endl;
}
 

int main(){
    DefaultConstructor();
    Constructor();
    Assignment();
    AssignmentInput();

    Conjugate();
    Module();
    Norm();

    UnaryPlus();
    UnaryMinus();   

    PlusFloat();
    MinusFloat(); 
    MultiplyFloat();
    DivideFloat();  

    PlusComplex(); 
    MinusComplex();
    MultiplyComplex();
    DivideComplex();

    PlusEqual(); 
    MinusEqual();
    MultiplyEqual();
    DevideEqual();

    FloatPlusComplex;
    FloatMinusComplex;
    FloatMultiplyComplex;
    DivideFloatByComplex(); 

    Equal(); 
    NotEqual();
    Less();
    LessEqual(); 
    Larger();
    LargerEqual();
 
    return 0;
}

 