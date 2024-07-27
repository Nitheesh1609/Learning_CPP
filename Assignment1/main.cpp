#include <iostream>
#include "func_ptr.h"

int main() {
    int x{}, y{}, result{};
    std::cout << "Enter 2 Numbers:";
    std::cin >> x >> y;
    int *ptr1 = &x;
    int *ptr2 = &y;
    int *ptr3 = &result;

    //Pointers
    int sum = Add(ptr1,ptr2);
    std::cout << "\nSum:" << sum << std::endl;
    AddVal(ptr1, ptr2, ptr3);
    std::cout << "AddVal:" << result << std::endl;
    Swap(ptr1,ptr2);
    std::cout << "Swap: x is " << x << "y is " << y <<std::endl;
    Factorial(ptr1,ptr3);
    std::cout << "Factorial of x is " << result;

    //Reference
    RefAddVal(x, y, result);
    std::cout << "AddVal:" << result << std::endl;
    RefSwap(x,y);
    std::cout << "Swap: x is " << x << "y is " << y <<std::endl;
    RefFactorial(x,result);
    std::cout << "Factorial of x is " << result;
    return 0;
}
