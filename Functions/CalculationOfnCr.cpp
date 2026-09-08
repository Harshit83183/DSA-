#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    int ans = 1;
    for(int i = 0; i <=n; i++){
        ans = ans*i;
    }
    return ans;
}
int nCr(int n, int r){
    int num = fact(n);
    int den = fact(r) * fact(n-r);
    return num/den;
}
int main (){
    int a, b;
    cout << "Enter Numbers : " ;
    cin >> a >> b;
    int q = nCr(a, b);
    cout << q << endl;
    return 0;
}