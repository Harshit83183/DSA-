#include <bits/stdc++.h>
using namespace std;
int main (){
    int x, count= 0, a, b=1, sol = 0;
    cin>>x;
    int temp = x;
    while(temp!=0){
        count++;
        temp = temp / 10;
    }
    while(x != 0){
            int i = 0;
            a = x%10;
            while(i<count-1){
                b = b*10;
                i++;
            }
            sol = sol + a*b;
            x = x/10;
            b = 1;
            count--;
    }
    cout<<sol;
}