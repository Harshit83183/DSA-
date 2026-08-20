#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = n-i+1;
        while(j<n){
            cout<<" ";
            j++;
        }
        int k = i;
        while(k<=n){
            cout<<"*";
            k++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}