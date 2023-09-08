#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, c;
    cout <<"Input first number:\n ";
    cin >>a;
    cout << "Input second number:\n ";
    cin >>b;
    cout << "Input third number:\n ";
    cin >>c;
    if(a > b && a > c)
    {
        cout << "The greatest number is: " << a;
    }
    if(b > a && b > c)
    {
        cout <<"The greatest number is: " << b;
    }
    if(c > b && c > b)
    {
        cout <<"The greatest number is: " << c;
    }

    return 0;
}