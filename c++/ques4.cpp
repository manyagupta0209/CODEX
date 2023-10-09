#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Enter age= "<<endl;
cin>>age;
   if(age<=12&&age>=1){
    cout<<"Child"<<endl;
   }
   else if(age>=13&&age<=19){
    cout<<"Teenager"<<endl;
   }
   else if(age>19&&age<=60){
    cout<<"Adult"<<endl;
   }
   else if(age>60&&age<=100){
     cout<<"Senior Citizen"<<endl;
   }
   else{
    cout<<"Invalid"<<endl;
   }
return 0;
}