#include <iostream>
#include <ctime>
using namespace std;
int main() {
    time_t now = time(0);
    char* t= ctime(&now);
    cout<<"current date and time = "<<t<<endl;
    return 0;
    }
