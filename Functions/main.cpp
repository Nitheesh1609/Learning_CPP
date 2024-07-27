#include <iostream>
#include "math.h"

// Functions are set of statements enclosed within {}
// Building blocks of C and C++
// Helps in preventing repetitive code
// Syntax of a Function : <return type> <name>(<parameters>) {<body>}
// example of function definition :int add(int a, int b){ return x+y;}

void Print(char ch);

//Main is the entry point of every program
int main() {
    int x,y;
    std::cout << "Give 2 numbers to add:";
//    std::cin >> x >> y;
//    int res = sum(x,y);
//    std::cout << "Sum of 2 numbers are :" << res << std::endl;
//    Print('#');

    //Previous Initialization
    int a1; //UnInitialized var
    int a2=0; //Copy Initialization when ever we do "=" initialization
    int a5(5); //Direct Initialization
    std::string s1;
    char x1[8];
    char x2[8] = {'\0'};
    char x3[8] = {'a','b','c','d'}; //Aggregate Initialization
    char x4[8] = {"abcd"};

    //Vector Variable
    int b1{}; //Value Initialization to 0
    int b5{5};

    char e1[8]{};
    char e2[8]{"hello"};

    int *p1 = new int{};
    char *p2 = new char[8]{};
    char *p3 = new char[8]{"Hello"};
    return 0;
}

void Print(char ch){
    for(int i=0;i<10;i++){
        std::cout << ch;
    }
    std::cout << std::endl;
}

/*
 * 1.Value Initialization => T obj{};
 * 2.Direct Initialization => T obj(val);
 * 3.Copy Initialization => T obj = val;
 * Benefits of uniform init
 * => Forces Initialization
 * => Removed forced conversion
 *
 */