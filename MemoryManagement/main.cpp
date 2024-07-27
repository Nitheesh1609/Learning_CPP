#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
/*
 * Memory Management in C/C++
 * stack -> local variables in functions/limited scope
 * data section -> All the global and static variable
 * heap -> run time memory allocation (Dynamic Memory Allocation)
 *          We need to free the allocated memory.
 *          malloc() -> alloce raw memory on the heap
 *          calloc() -> allocates raw memory and initiallize it to 0
 *          realloc() -> allocates large chunk of memory from an exisiting allocation
 *          free() -> frees the allocated memory.
 * C++:
 * new - allocated memory on heap
 * delete - delete alocated memory
 */
/*
 * malloc                               new
 * function                             operator
 * requires size during allocation      size is based on the type
 * cannot initialize memory             can initialize
 * cannot call constructors             can call constructors
 * returns void pointer that needs      return correct type pointer
 * to be type-casted
 * cannot be customized                 can be customized using overloading
 * return null of failure               throws exception
 */
void tem(){
    int *p = new int(15); // Throws exception
    //*p = 10;
    std::cout << "value is " << *p << std::endl;
    delete p;
    p = nullptr;
}

/*
 * new for arrays
 * new [] eg: int *p =  new
 * delete []
 */

void newArr(){
    int *p = new int[5];
    for(int i=0;i<5;i++){
        p[i] = i*5;
    }
    delete []p;
    p= nullptr;
}
/*
 * Strings
 */
void strArr(){
    char *p =  new char[4];
    strcpy(p,"C++");
    std::cout << p << std::endl;
    delete []p;
}

/*
 * 2D arrays
 */
void two_d(){
    int *p1 = new int[3];
    int *p2 = new int[3];
    int **ptr = new int *[2];
    ptr[0] = p1;
    ptr[1] = p2;
    ptr[0][1] = 8;
    std::cout << "vv " << ptr[0][1] << std::endl;

    delete []p1;
    delete []p2;
    delete []ptr;
}

int main() {
    int data[2][3] = {
            1,2,3,
            4,5,6
    }; //1,2,3,4,5,6
    std::cout << "v " << data[0][1] << std::endl;
    two_d();
    //malloc() example => does not initialize
//    int *p = (int *) malloc(sizeof(int));
//    //calloc() example
//    //int *p = (int *) calloc(1,sizeof(int));
//    if(p == NULL){
//        std::cout << "Memory Allocated Failed";
//        return -1;
//    }
//    //*p = 10;
//    std::cout << "Hello, World! "<< *p << std::endl;
//    free(p);
    //p = NULL;
    //free(p);
    //tem();
    //newArr();
    strArr();
    return 0;
}
