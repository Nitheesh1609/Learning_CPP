#include <iostream>

int Add( int a, int b){
    return a+b;
}

double Add( double a, double b){
    return a+b;
}

void test(int x){
    std::cout << "Test 1";
}

void test(const int *x){
    std::cout << "Test 2";
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Result : " << Add(5,2);
    std::cout << "\n Result double: " << Add(3.4, 6.5);
    const int x = 5;
    test(&x);
    return 0;
}

/*
 * Arguments should differ in type or number to achive function overloading
 * Pointer & refernce arguments, qualifier can participate in overloading.
 * Achieved by Name Mangling
 */