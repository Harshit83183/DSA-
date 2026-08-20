#include <bits/stdc++.h>
using namespace std;

int power(int a, int b){
    int ans = 1;
    for(int i = 0; i < b; i++){
        ans = ans * a;
    }
    return ans;
}
int main (){
    int a, b;
    cout << "Enter Numbers : ";
    cin >> a >> b;
    cout << "The Answer is : " << power(a,b);
    return 0;
}