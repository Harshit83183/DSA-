#include <bits/stdc++.h>
using namespace std;

//for printing array through functions 

void Print(int arr[], int n){
    cout << "Array Inside The Function -> ";

    //Printing Array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

//for updating array elements throgh functions 

void update(int arr[], int size){
    cout << "Updated Array - > ";

    //Updating Array ->
    arr[0] = 15092004;

    //displaying updated array ->
    for(int i = 0; i < size; i++){
        cout <<  arr[i] << " ";
    }
    cout << endl;
}

int main (){
    int size;
    cout << "Enter Size -> ";
    cin >> size;
    int arr[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    

    //printing through function
    Print(arr, size);

    //printing the array ->>>
    cout << "Printing in main function ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //updating array elements and print throgh functions ->
    update(arr, size);
    return 0;
}