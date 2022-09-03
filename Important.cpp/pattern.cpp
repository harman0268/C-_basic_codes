#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;


    for(int i=1;i<=n;i=i+1){
        for(int j=1;j<=i;j=j+1){
            cout<<i;
        }
        cout<<"\n";
    }
    /*i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;}*/

    
    


    return 0 ;
}