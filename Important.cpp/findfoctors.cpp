#include<iostream>
using namespace std;
/*int main(){
    int i,n;
    cin>>i;
    for(n=1;n<=i;++n){
        if(i%n==0);
        cout<<i;
    }
    return 0;
}*/


/*#include <iostream>
using namespace std;

int main() {
    int n, i;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factors of " << n << " are: ";  
    for(i = 1; i <= n; ++i) {
        if(n % i == 0)
            cout << i << " ";
    }

    return 0;
}*/

#include <iostream> 
using namespace std;
 int main() { 
    int n, i; 
    cout << "Enter a positive integer: ";
     cin >> n; 
     cout << "Factors of " << n << " are: "; 
for(i = 1; i <= n; ++i) { 
    if(n % i == 0) 
    cout << i << " "; 
    } 
    return 0; 
    }