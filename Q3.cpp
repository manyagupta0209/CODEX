#include<iostream>
using namespace std;
inline int addNumbers(int a, int b) {
    return a+b;
}

int multiplyNumbers(int x, int y, int z = 1) {
    return x*y*z;
}

int main() {
    int sum = addNumbers(5, 7);
    std::cout<< "sum= "<<sum<<std::endl;
    int product = multiplyNumbers(3, 4);
    std::cout<< "product= "<<product<<std::endl;
    return 0;
}