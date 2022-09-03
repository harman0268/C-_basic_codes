#include<iostream>
using namespace std;
int add(int x,int y){
    int z;
    z=x+y;
    return z;
}
int main(){
    int a=5,b=5,c;
    c=add(a,b);
    cout<<"SUM is "<<c;
    
}