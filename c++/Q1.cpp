#include<iostream>
using namespace std; 
struct student {
    int studentID;
    double GPA;
};

void printStudentInfo(student s) {
    std::cout<<"Student ID- "<<s.studentID<<std::endl;
    std::cout<<"Student GPA- "<<s.GPA;
}

int main() {
    student alice = {101, 3.8};
    printStudentInfo(alice);
    return 0;
}