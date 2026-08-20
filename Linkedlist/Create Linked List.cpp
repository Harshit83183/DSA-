#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node*next;
    
    Node(int value){
        data = value;
        next = NULL;
    }
};

Node*createnode(int value){
    Node*n1 = new Node(value);
    return n1;
}
int main (){
    int value;
    cin>>value;
    Node*n1 = createnode(value);
    cout<<"Linked List created Successfully"<<endl;
    cout<<"Data = "<<n1 -> data<<endl;
    cout<<"Next = "<<n1 -> next<<endl;
    return 0;
}