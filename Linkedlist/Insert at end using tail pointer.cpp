#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    
    Node(int value){
        data = value;
        next = NULL;
    }
};
int main (){
    int n, value;
    cin>>n;
    Node*head = NULL;
    Node*temp = NULL;
    Node*tail = NULL;
    for(int i=0; i<n; i++){
        cin>>value;
        Node*newnode = new Node(value);
        if(head == NULL){
            head = newnode;
            tail = head;
        }
        else{
            tail -> next = newnode;
            tail = newnode;
        }
    }
    Node*insert = new Node(23);
    tail -> next = insert;
    tail = insert;
    temp = head;
    cout<<"Display Linked List"<<endl;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp -> next;
    }
    cout<<"NULL";
    return 0;
    
}