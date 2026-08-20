#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a=1;
    for(int i=2; i<n-1; i++){
        if(n%i == 0){
            a = 0;
            break;
        }
    }
    
    if(a == 0){
        cout<<"Not a prime number"<<endl;
    }
    else{
        cout<<"is a prime number"<<endl;
    }
    return 0;
}