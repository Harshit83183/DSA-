#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int i = 1;
    char a = 65;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<a<<" ";
            j++;
            a++;
            
        }
        a = 65 + i;
        cout<<endl;
        i++;
    }
    return 0;
}