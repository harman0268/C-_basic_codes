#include<iostream>
using namespace std;
int sub(int a,int b)
{
    int c;
    c=a-b;
    return c;

}
int main(){
    int x=10,y=5,z;
    z=sub(x,y);
    cout<<"SUB is "<<z;
}