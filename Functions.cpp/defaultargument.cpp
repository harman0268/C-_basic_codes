#include<iostream>
using namespace std;
int sub(int x,int y,int z=0){
    return x-y-z;

}
int main(){
    cout<<sub(12,5)<<endl;
    cout<<sub(10,2,5)<<endl;
    cout<<sub(10,5,0);

}