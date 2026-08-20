#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = i;
        while(j<n){
            cout<<" ";
            j++;
        }
        int k = n-i;
        while(k<n){
            cout<<i;
            k++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}