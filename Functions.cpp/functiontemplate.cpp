#include<iostream>
using namespace std;
template<class temp>
temp add(temp a,temp b){
    return a+b;
}
int main(){
    int c=add(10,5);
    float g=add(5.5,6.5);
    cout<<c<<endl;
    cout<<g<<endl;
}

