#include <bits/stdc++.h>
using namespace std;

int Sum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}
int main (){
    int size;
    cout << "ENter Size : ";
    cin >> size;
    int arr[size];
    cout << "Enter Array Elements : " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << "Array is -> " ;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Sum of Array is : " << Sum(arr, size);
    return 0;
}