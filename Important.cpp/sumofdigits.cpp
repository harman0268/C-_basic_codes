#include<iostream>
using namespace std;
int main(){
    int i,sum=0;
    cin>>i;
    /*while(i>0){
        sum=sum+i%10;
        i=i/10;
    }*/

    for(;i>0;i=i/10){
        sum=sum+i%10;

        


        
    }
    cout<<sum<<endl;
    return 0;

}


