#include<iostream>
using namespace std;
int main(){
int i;
for(i=1;i<21;i++){
    if(i==10)
    continue;
    else{
        if(i%2==0)
        cout<<i<<endl;
    }
}
return 0;
}
