#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = i;
        int a = 1;
        int b = i-1;
        while(j<n){
            cout<<" ";
            j++;
        }
        int k = n-i;
        while(k<n){
            cout<<a;
            a++;
            k++;
        }
        int l = n-i+1;
        while(l<n){
            cout<<b;
            b--;
            l++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}