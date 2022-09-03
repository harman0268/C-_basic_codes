#include<iostream>
using namespace std;
template<class temp>
temp maxim(temp a,temp b,temp c){
    return a>b?a:b>c?b:c;
}
int main(){
    cout<<maxim(15,12,10)<<endl;
    cout<<maxim(5.5,7.5,6.5)<<endl;
    

}
