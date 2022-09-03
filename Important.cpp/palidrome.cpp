#include<iostream>
using namespace std;
int main(){
    int i,rev=0,org;
    cin>>i;
    org=i;
    while(i>0){
        rev = (rev*10)+i%10;
        i=i/10;
        
        

    }
    if(org==rev){
        cout<<"palidrone";
    }
    else{
        cout<<"not a palidrome";
    }
    return 0;
}