#include<iostream>
using namespace std;
int main(){
    int i,fact=1;
    cin>>i;
   /* while(i>=1){
        fact=fact*i;
        i=i-1;
    }*/

    for(;i>=1;i=i-1){
        fact=fact*i;
    }
    cout<<fact<<endl;
    return 0;
}