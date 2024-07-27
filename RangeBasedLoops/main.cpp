#include <iostream>

/*
 * Range Based for loop
 * Allows iteration over arrays
 * for(variable declaration : range){body;}
 */
int main() {
    int arr[]={1,2,3, 4};

    for(const auto &x : arr){
        std::cout << x << " ";
    }
    std::cout << std::endl;


    for(const auto &x : {1,2,3,4,5,6}){
        std::cout << x << " ";
    }
    std::cout << std::endl;
    //auto &&range = arr;
    auto beg = std::begin(arr); //&arr[0];
    auto end = std::end(arr);   //&arr[5];

    for(;beg != end; beg++){
        std::cout << *beg << " ";
    }

    //C++ 17 Change
    //End can be of different type

    std::cout << std::endl;
    char a[]="test";
    auto start = std::begin(a);
    auto last = std::end(a);
    for(;start != (last-1) ; start++){
        std::cout << *start;
    }
    return 0;
}
