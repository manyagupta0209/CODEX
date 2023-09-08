#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[])
{ 
    float a, b;
    string o;
    char c;
cout <<"Select the operation you would like to perform: +,-,*,/\n for finding absolute value enter 'Y' if not enter 'N'\n";
    cin >> c;
   

    cout <<"Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    

    if (c == 'Y')
    {
        int x;
        cout <<"Enter number for which you want to calculate absolute value: ";
        cin >> x;
        if (x< 0)
        {
            x = x * -1;
        }
        cout <<"The absolute value of the given number is: " << x;
    }
    if (c == 'N')
    {
        cout <<"You have to atleast select one of the following operation";
    }

    if (c== '+')
    {
        cout <<"the final answer is: " << a + b;
    }
    else if (c== '-')
    {
        cout <<"the final answer is: " << a - b;
    }
    else if (c== '*')
    {
        cout <<"the final answer is: " << a * b;
    }
    else if (c== '/')
    {
        if (b==0)
        {
            cout << "Division is not defined";
        }
        else
            cout << "the final answer is: " << a / b;
    }

    return 0;
}