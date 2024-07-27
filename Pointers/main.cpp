#include <iostream>
/*
 * Pointer - Points to another variable
 * Holds the memory address of another variable
 * Used for indirect access of the variables
 * Need not tobe initialized during declaration
 * Declared with * operator
 * eg: int *p1;
 * To get the address we use & operator
 * eg: int x;
 * int *p1 = &x;
 *
 * Pointer type can point to only the same type variable
 * To point to any type use void pointer
 * eg: void *p1 = &x;
 * Alwys initialize the pointer
 * NULL is mostly defined as 0
 * Use nullptr instead of NULL
 * void *ptr = nullptr; // Throws Read or Write access vioalation if used nullptr
 */

/*
 * Reference: Alias for a variable
 * int x{5};
 * int &ref=x;
 */

/*
 * const Qualifier
 * const float PI{3.14f};
 *
 */

/* Constant Pointers
 * Pointer pointing to a constant variable is not allowed
 * const int *ptr  :=> ptr points to a constant variable
 * const int *const ptr :=> ptr is a constant pointer points to a constant variable
 */

const float PI{3.14f};
int main() {
    int x{5};
    const int MAX = 12;
    int &ref_x1=x;
    const int &ref_x2 =x ;
    ref_x1 = 7;
    //ref_x2 = 15; // Cannot assign

    const int *ptr1 = &x;
    int *const ptr2 =&x;
    const int *ptr3 =&MAX;
    const int *ptr4 = &MAX;
    const int &r1 = ref_x1;
    const int &r2 = ref_x2;
    const int *&p_ref1 = ptr1;
    std::cout << &ptr1 << "\n" << &p_ref1;
    const int *const &p_ref2 = ptr2;


    // *ptr1 = 5; // points to ready only varibale
    //ptr1 = &MAX;
    *ptr2 = 8;
    //ptr2 = &MAX; Cannot change




    //std::cout << "Hello, World!" << std::endl;
    //int x{5};
    //int *p1 = &x;
    //std::cout << x << "\n" << p1 << "\n" << *p1 << std::endl;
    //*p1 = 10;
    //std::cout << x << "\n" << p1 << "\n" << *p1 ;
//    int &p = x;
//    std::cout << x << "\n" << p << "\n";
//    x=6;
//    std::cout << x << "\n" << p << "\n";
//    p=10;
//    std::cout << x << "\n" << p << "\n";
//    std::cout << &x << "\n" << &p;


    // Constant
    /*
    float radius{5.3f};
    float area = PI * radius * radius;
    std::cout << area;
    */




    return 0;
}
