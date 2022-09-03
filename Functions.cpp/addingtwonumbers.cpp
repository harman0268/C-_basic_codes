#include<iostream>
using namespace std;
int add(int x,int y){
    return x+y;
}
float add(float x,float y){
    return x+y;
}
int main(){
    int a=10,b=5,c;
    c=add(a,b);
    cout<<c<<endl;
    float l=5.5,n=6.5,m;
    m=add(l,n);
    cout<<m;
}