#include<iostream>
using namespace std;
enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int calculateDaysRemaining(Days today) {
    return(7-today);
}

int main() {
    Days currentDay = Wednesday;
    int daysRemaining = calculateDaysRemaining(currentDay);
    std::cout<<"Days remaining are: "<<daysRemaining;
    return 0;
}