#include<iostream>
using namespace std;
int main(){
int i,j,count1=0;
for(i=2;true;i++){
    for(j=1;j<=i;j++){
        if(i%j==0){
            count1++;
        }
    }    
        if(count1==2){
            cout<<i<<endl;
        }
        if(i==12){break;}
        count1=0;
}
return 0;
}