#include<iostream>
using namespace std;
int main(){
    int i,org,rev=0;
    cin>>i;
    org=i;
    while(i>0){
        rev=(rev*10)+i%10;
        i=i/10;

    }
    if(org==rev){
        cout<<"It is a palidrome Number"<<endl;
    }
    else{
        cout<<"Not a Palidrome Number"<<endl;
         
    }
    return 0;
   
}