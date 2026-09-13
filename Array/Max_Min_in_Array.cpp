// #include <bits/stdc++.h>
// using namespace std;


// int MinDig(int arr[], int size){
//     //INT_MIN is already defined minimum value -> 2^-31
//     int Min = INT_MAX;
//     for(int i = 0; i < size; i++){
//         if(arr[i] < Min){
//             Min = arr[i];
//         }
//     }
//     return Min;

// }

// int MaxDig(int arr[], int size){
//     //INT_MIN is already defined minimum value -> 2^-31
//     int Max = INT_MIN;
//     for(int i = 0; i < size; i++){
//         if(arr[i] > Max){
//             Max = arr[i];
//         }
//     }
//     return Max;

// }

// int main(){

//     int size;
//     cout << "Enter Size of Array -> ";
//     cin >> size;

//     int arr[size];
//     cout << endl << "Enter All Inputs ->";
//     for(int i = 0; i < size; i++){
//         cin >> arr[i];
//     }
//     for(int i = 0; i < size; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl << "Maximum Number is -> " << MaxDig(arr, size) << endl;
//     cout << endl << "Minimum Number is -> " << MinDig(arr, size) << endl;

//     return 0;
// }

//2nd type -------->>>>>>>

#include <bits/stdc++.h>
using namespace std;


int MinDig(int arr[], int size){
    //INT_MIN is already defined minimum value -> 2^-31
    int Min1 = INT_MAX;
    for(int i = 0; i < size; i++){
        // minimum dhoondne ka 2nd type->>>
        Min1 = min(Min1, arr[i]);
        // if(arr[i] < Min){
        //     Min = arr[i];
        // }
    }
    return Min1;

}

int MaxDig(int arr[], int size){
    //INT_MIN is already defined minimum value -> 2^-31
    int Maxi = INT_MIN;
    for(int i = 0; i < size; i++){

        Maxi = max(Maxi, arr[i]);
        // if(arr[i] > Max){
        //     Max = arr[i];
        // }
    }
    return Maxi;

}

int main(){

    int size;
    cout << "Enter Size of Array -> ";
    cin >> size;

    int arr[size];
    cout << endl << "Enter All Inputs ->";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl << "Maximum Number is -> " << MaxDig(arr, size) << endl;
    cout << endl << "Minimum Number is -> " << MinDig(arr, size) << endl;

    return 0;
}