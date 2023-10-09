#include<iostream>
using namespace std;
int main(){
string password="meow";
string passWord;
cout<<"Enter your password= "<<endl;
cin>>passWord;

while(passWord!=password){
    cout<<"Invalid password, try again"<<endl;
    cin>>passWord;
    }
    cout<<"Valid Password"<<endl;
    return 0;
}