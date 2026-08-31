#include <bits/stdc++.h>
using namespace std;

bool isEven(int a){
    // 1 -> Even
    // 0 -> Odd
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main () {
    int n;
    cout << "Enter the number : " ;
    cin >> n;
    if(isEven(n)){
        cout << "Number is Even" << endl;
    }
    else{
        cout << "Number is Odd" << endl;
    }
    return 0;
}