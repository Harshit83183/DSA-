#include <bits/stdc++.h>
using namespace std;
int main (){
    int x, dig, sol=0;
    cin>>x;
    while(x!=0){
        dig = x%10;
        sol = sol*10 + dig;
        x = x/10;
    }
    cout<<sol;
}