#include <bits/stdc++.h>
using namespace std;

bool poweroftwo(int n){
    int ans = 1;
    for(int i=0; i<30; i++){
        if(n==1){
            return true;
        }
        ans = ans * 2;
        if(ans == n){
            return true;
        }
    }  
    return false;
}
int main (){
    int n;
    cout<<poweroftwo(16);
}