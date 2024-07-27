#include <iostream>

int main() {
    std::cout << "Hello C++ "<< std::endl;

    //variables

    int i;
    std::cout << i << std::endl; //garbage Value
    i=5;
    std::cout << i; //initialized value

    char ch = 'a';
    //true or false || 0 or any number
    bool flag = false;
    // float always with f at the end
    float f = 1.25f;
    double d = 247.42;
    //ARRAYs vector Types
    int a[5];
    int b[5]={1,6,9,5,8};
    std::cout << ch << std::endl << flag << std::endl << f << std::endl << d << std::endl;
    //std::cout << *(b)+4;
    //Basic IO console
    //cout << for output on console
    //cin >> for input from console
    int age;
    std::cout << "Your age is :" ;
    std::cin >>  age;
    std::cout << "Your age is :" << age << std::endl;
    char name[512];
    std::cout << "Your name is :" ;
    //std::cin >>  name;
    //cin does not count "space", it considers "space" as a delimiter. In order to get the name
    //with space use cin.getline
    std::cin.getline(name,128,'~');
    std::cout << "Your name is :" << name << std::endl;
    return 0;
}
