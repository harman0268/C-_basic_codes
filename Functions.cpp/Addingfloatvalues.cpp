#include<iostream>
using namespace std;
float add(float x,float y){
    float z;
    z=x+y;
    return z;
}
int main(){
    float x=2.5,y=5.5,z;
    z=add(x,y);
    cout<<"Sum of two float numbers is "<<z; 
}