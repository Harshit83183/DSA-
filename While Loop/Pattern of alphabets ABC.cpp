#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int i=1;
    char c = 65;
    while(i<=a){
        int j=1;
        while(j<=a){
            cout<<c<<" ";
            j++;
            c++;
        }
        c = 65 + i;
        i++;
        cout<<endl;
    }
    return 0;
    
}