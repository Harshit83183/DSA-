#include <bits/stdc++.h>
using namespace std;

//array using function
void Array(int arr[], int size){
    cout << "Printing the array -> " << endl;
    //print the array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "Printing Done !!";
}
int main(){
    //printing using functions
    int number[10] = {0};
    Array(number, 10);

    //second one
    int num[30];
    int a = 30;
    Array(num, a);
    return 0;
}