#include<iostream>
using namespace std;
int main(){
    const float pi = 3.14;
    float radius, area;
    cout<<"enter the radius of circle="<<endl;
    cin>>radius;
    area = pi*radius*radius;
    cout<<"area="<<area;
    return 0;
}