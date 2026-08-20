#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    
    Node(int value){
        data = value;
        next = NULL;;
    }
};
int main (){
    int n, value;
    cin>>n;
    Node*head = NULL;
    Node*temp = NULL;
    for (int i=0; i<n; i++){
        cin>>value;
        Node*newnode = new Node(value);
        if(head == NULL){
            head = newnode;
            temp = head;
        }
        else{
            temp -> next = newnode;
            temp = newnode;
        }
    }
    // deletion from end;
    Node*temp1 = head;
    temp = head;
    while(temp -> next -> next != NULL){
        temp = temp -> next;
    }
    temp1 = temp -> next;
    temp -> next = NULL;
    delete temp1;
    
    cout<<"Display Linked List"<<endl;
    temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }
    cout<<"NULL";
    return 0;
    
    
}