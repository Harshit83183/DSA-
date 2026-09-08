#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int n){
    for(int i = 2; i * i <= n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
int main() {
    int a;
    cout << "Enter No. ";
    cin >> a;
    if(IsPrime(a)){
        cout << "Is a Prime Number";
    }
    else{
        cout << "Not a prime number";
    }
    return 0;
}