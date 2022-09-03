#include<iostream>
using namespace std;
int main(){
    int n,i,j,b;
    cin>>n;
   /* for(i=1;i<=n;i=i+1){
        for(b=1;b<=n-i;b=b+1){
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j=j+1){
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
        while(j<=2*i-1){
            cout<<"*";
            j=j+1;
        }
        cout<<"\n";
        i=i+1;

    }
    return 0;
}