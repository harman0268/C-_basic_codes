#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    //sum=0 hum isiliye lete hai ki koi garbage value na print krde!!
    cin>>n;
    for(i=1;i<=n;i++){
       
        sum=sum+i;

    }
    cout<<sum;
    return 0;

}