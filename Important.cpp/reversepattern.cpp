#include<iostream>
using namespace std;
 int main(){
    int n,b,i,j;
    cin>>n;
   
    /*for(i=1;i<=n;i=i+1){
        for(b=1;b<=n-i;b=b+1){
            cout<<" ";
        }
        for(j=1;j<=i;j=j+1){
            cout<<"*";

        }
        cout<<"\n";
    }*/
    i=1;
    while(i<=n){
        b=1;
        while(b<=n-i){
            cout<<" ";
            b=b+1;
        }
        j=1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;
    }



return 0;
        }
    
 