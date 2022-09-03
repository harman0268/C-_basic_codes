#include<iostream>
using namespace std;
int main(){
    int i,j,count=0;
    cin>>i;
    for(j=1;j<=i;j++){

        if(i%j==0)
        count++;
    }
    if(count==2){
        cout<<"prime number";
    
    }else{
        cout<<"not a prime";
    }
    return 0;
}