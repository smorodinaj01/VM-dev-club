#include "complex.h"
 
bool DefaultConstructor(){
    Complex z;
    if ((z.real == 0)&&(z.imag == 0)){
        std::cout << "Test 1 OK \n";
        return true;
    } 
    return false;
}

bool Constructor(){
    Complex z(5,-2);
    if ((z.real == 5)&&(z.imag == -2)){
        std::cout << "Test 2 OK \n";
        return true;
    } 
    return false;
}

bool Assignment(){
    Complex z;
    z = Complex(2, 3);
    if ((z.real == 2)&&(z.imag == 3)){
        std::cout << "Test 3 OK \n";
        return true;
    } 
    return false;
}

bool AssignmentInput(){
    std::cout << "Enter Re-part: "; 
    float a; std::cin >> a;
    std::cout << "Enter Im-part: ";
    float b; std::cin >> b;
    Complex z(a, b);
    if ((z.real == a)&&(z.imag == b)){
        std::cout << "Test 4 OK \n";
        return true;
    } 
    return false;
}

bool Conjugate() {
    Complex z1(100, 22);
    Complex z2 = z1.conj();
    if ((z2.real == 100)&&(z2.imag == -22)){
        std::cout << "Test 5 OK \n";
        return true;
    }
    return false;
}
 

bool Module() {
    Complex z(3, 4);
    if (z.module() == 5){
        std::cout << "Test 6 OK \n";
        return true;
    }
    return false;
}
 
bool Norm() {
    Complex z(12, 15);
    if (z.norm() == 369){
        std::cout << "Test 7 OK \n";
        return true;
    }
    return false; 
}

bool UnaryPlus(){
    Complex z1(12, 40);
    Complex z2 = +z1;
    if ((z2.real == 12) && (z2.imag == 40)){
        std::cout << "Test 8 OK \n";
        return true;
    } 
    return false;
}

bool UnaryMinus(){
    Complex z1(306, 401);
    Complex z2 = -z1;
    if ((z2.real == -306)&&(z2.imag == -401)){
        std::cout << "Test 9 OK \n";
        return true;
    }
    return false;
}


bool PlusFloat() {
    Complex z1(1, 1);
    float f = 5.0;
    Complex z2 = z1 + f;
    if ((z2.real == 6)&&(z2.imag == 1)){
        std::cout << "Test 10 OK \n";
        return true;
    }
    return false;
}

bool MinusFloat() {
    Complex z1(1, 1);
    float f = 5.0;
    Complex z2 = z1 - f;

    if ((z2.real == -4)&&(z2.imag == 1)){
        std::cout << "Test 11 OK \n";
        return true;
    }
    return false;
}

bool MultiplyFloat() {
    Complex z1(2, 3);
    float f = 3.0;
    Complex z2 = z1*f;
    if ((z2.real == 6)&&(z2.imag == 9)){
        std::cout << "Test 12 OK \n";
        return true;
    }
    return false;
}

bool DivideFloat() {
    Complex z1(20, -6);
    float f = 2.0;
    Complex z2 = z1/f;
    if ((z2.real == 10)&&(z2.imag == -3)){
        std::cout << "Test 13 OK \n";
        return true;
    }
    return false;
}

bool PlusComplex() {
    Complex z1(1, 1);
    Complex z2(2, -1);
    Complex z3 = z1 + z2;
    if ((z3.real == 3)&&(z3.imag == 0)){
        std::cout << "Test 14 OK \n";
        return true;
    }
    return false;
}

bool MinusComplex() {
    Complex z1(1, 1);
    Complex z2(2, -1);
    Complex z3 = z1 - z2;
    if ((z3.real == -1)&&(z3.imag == 2)){
        std::cout << "Test 15 OK \n";
        return true;
    }
    return false;
}

bool MultiplyComplex() {
    Complex z1(2, 3);
    Complex z2(2, -2);
    Complex z3 = z1*z2;

    if ((z3.real == 10)&&(z3.imag == 2)){
        std::cout << "Test 16 OK \n";
        return true;
    }
    return false;
}

bool DivideComplex() {
    Complex z1(20,-6);
    Complex z2(2, 2);
    Complex z3 = z1/z2;

    if ((z3.real == 3.5)&&(z3.imag == -6.5)){
        std::cout << "Test 17 OK \n";
        return true;
    } 
    return false;
}


bool PlusEqual() {
    Complex z1(1, 1);
    Complex z2(2,-1);
    z2 += z1;
    if ((3 == z2.real)&&(0 == z2.imag)){
        std::cout << "Test 18 OK" << std::endl;
        return true;
    }
    return false;
}

bool MinusEqual() {
    Complex z1 (1.0, 1.0);
    Complex z2 (2.0,-1.0);
    z2 -= z1;
    if ((1.0 == z2.real)&&(-2.0 == z2.imag)){
        std::cout << "Test 19 OK" << std::endl;
        return true;
    }
    return false;
}

bool MultiplyEqual() {
    Complex z1(1, 2);
    Complex z2(2,-4);
    z1 *= z2;
    if ((10 == z1.real)&&(0 == z1.imag)){
        std::cout << "Test 20 OK" << std::endl;
        return true;
    }   
    return false;
}

bool DevideEqual() {
    Complex z1(2,-4);
    Complex z2(1,-1);
    z1 /= z2;
    if ((3 == z1.real)&&(1 == z1.imag)){
        std::cout << "Test 21 OK" << std::endl;
        return true;
    }
    return false;
}

bool FloatPlusComplex() {
    float f = 29;
    Complex z(-120, 7);
    Complex ans = f + z;

    if ((-91 == ans.real)&&(7 == ans.imag)){
        std::cout << "Test 22 OK" << std::endl;
        return true;
    }
    return false;
}
    
bool FloatMinusComplex() {
    float f = 14;
    Complex z(-12, 7);
    Complex ans = f - z;
    if ((26 == ans.real)&&(-7 == ans.imag)) {
        std::cout << "Test 23 OK" << std::endl;
        return true;
    }
    return false;
}
 
 
bool FloatMultiplyByComplex() {
    float a = 4;
    Complex z(-12, 7);
    Complex ans = a * z;
    if ((-48 == ans.real)&&(28 == ans.imag)){
        std::cout << "Test 24 OK" << std::endl;
        return true;
    }
    return false;
}

bool FloatDivideByComplex() {
    float f = 2.0;
    Complex z1(5, 1);
    Complex z2 = z1/f;
    if ((2.5 == z2.real)&&(0.5 == z2.imag)){
        std::cout << "Test 25 OK" << std::endl;
        return true;
    }
    return false;
}

bool Equal() {
    Complex z1(1, 2);
    Complex z2(1, 2);
    if(z1==z2){
        std::cout << "Test 26 OK" << std::endl;
        return true;
    }
    return false;
}

bool NotEqual() {
    Complex z1(1, 2);
    Complex z2(1,-2);
    if (z1 != z2){
        std::cout << "Test 27 OK" << std::endl;
        return true;
    }
    return false;
}

bool Less() {
    Complex z1(2, 3);
    Complex z2(4,-5);
    if (z1 < z2){
        std::cout << "Test 28 OK" << std::endl;
        return true;
    }
    return false;
}

bool LessEqual() {
    Complex z1(2, 3);
    Complex z2(4,-5);
    if (z1 <= z2){
        std::cout << "Test 29 OK" << std::endl;
        return true;
    }
    return false;
}

bool Larger() {
    Complex z1(10, 2);
    Complex z2(1, -5);
    if(z1 > z2){
        std::cout << "Test 30 OK" << std::endl;
        return true;
    }
    return false;
}

bool LargerEqual() {
    Complex z1(10, 0);
    Complex z2(1, -2);
    if (z1>=z2){
        std::cout << "Test 31 OK" << std::endl;
        return true;
    }
    return false;
}


int main(){
    return 
        DefaultConstructor() &&
        Constructor() &&
        
        Assignment() &&
        AssignmentInput() &&

        Conjugate() &&
        Module() &&
        Norm() &&

        UnaryPlus() &&
        UnaryMinus() &&  
    
        PlusFloat() &&
        MinusFloat() &&
        MultiplyFloat() &&
        DivideFloat() &&  

        PlusComplex() &&
        MinusComplex() &&
        MultiplyComplex() &&
        DivideComplex() &&

        PlusEqual() &&
        MinusEqual() &&
        MultiplyEqual() &&
        DevideEqual() &&

        FloatPlusComplex() &&
        FloatMinusComplex() &&
        FloatMultiplyByComplex() &&
        FloatDivideByComplex() &&

        Equal() &&
        NotEqual() &&
        Less() &&
        LessEqual() &&
        Larger() &&
        LargerEqual();
}

 