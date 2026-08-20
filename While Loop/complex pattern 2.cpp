#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int i = 1;
    int a = 0;
    while(i<=n){
        int j = 1;
        while(j<=n-a){
            cout<<j<<" ";
            j++;
        }
        j = n-i+1;
        while(j<n){
            cout<<"*"<<" ";
            j++;
        }
        j = n-i+1;
        while(j<n){
            cout<<"*"<<" ";
            j++;
        }
        j = n-a;
        while(j>0){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
        a++;
    
}
return 0;
}