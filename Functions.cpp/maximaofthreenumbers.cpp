#include<iostream>
using namespace std;
int maxima(int a,int b,int c){
    if(a>b && a>c)
    return a;
    else if(b>c)
    return b;
    else return c;
}
int main(){
    int a=10,b=1,c=50,l;
    l=maxima(a,b,c);
    cout<<l;
}

