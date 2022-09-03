#include<iostream>
using namespace std;
int main(){
    int x,n,sum=0;
    cin>>n;
    for(x=1;x<=n;x++){
        cout<<x<<endl;
       sum=sum+x;
        //cout<<x<<endl;
        
    }
    cout<<"the sum of yhe number is "<<sum;
    return 0;
}