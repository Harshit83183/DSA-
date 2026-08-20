#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    
    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};
int main (){
    int n, value;
    cin>>n;
    Node*head = NULL;
    Node*temp = NULL;
    Node*temp1 = NULL;
    for(int i=0; i<n; i++){
        cin>>value;
        Node*newnode = new Node(value);
        if(head == NULL){
            head = newnode;
            temp = head;
            temp1 = head;
            
        }
        else{
            temp -> next = newnode;
            temp = newnode;
            temp -> prev = temp1;
            temp1 = temp1 -> next;
        }
    }
    temp = head;
    temp1 = head;
    Node*insert = new Node(12);
    temp -> prev = insert;
    temp = insert;
    temp -> next = head;
    head = temp;
    cout<<"Display Linked List"<<endl;
    temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }
    cout<<"NULL";
    return 0;
    
}