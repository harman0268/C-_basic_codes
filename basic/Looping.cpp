#include<iostream>
using namespace std;
int main(){
    int age;
    char gender;
    cin>>age>>gender;
    
if(age < 18 && gender == 'M'){
    cout<<"male kid";
}
else if(age < 18 && gender == 'F'){
    cout<<"female kid";
}
else if(age > 18 && gender == 'M'){
    cout<<"male adult";
}
else{
    cout<<"female adult";
}
return 0;

}
