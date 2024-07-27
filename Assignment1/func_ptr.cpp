//
// Created by Nitheesh Prakash on 6/6/24.
//
#include<iostream>
int Add( int *a, int *b){
    return *a + *b;
}
void AddVal(int *a, int *b, int *result){
    *result = *a + *b;
}
void Swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void Factorial(int *a, int *result)
{
    int tmp{1};
    for (int i = 1; i <=*a;i++){
        tmp=tmp*i;
    }
    *result = tmp;
}

void RefAddVal(int a, int b, int &result){
    result = a + b;
}
void RefSwap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}
void RefFactorial(int a, int &result)
{
    int tmp{1};
    for (int i = 1; i <=a;i++){
        tmp=tmp*i;
    }
    result = tmp;
}