#include<iostream>
using namespace std;
int main(){
    int i,count=0,j;
    cin>>i;
    for(j=1;j<=i;j++){
        if(i%j==0)
        count++;
         }
         if(count==2)
            cout<<"the number is  prime";

         
        else
            cout<<"the number is   not prime";
         
    
        
            return 0;
    }
    
        
    
    
