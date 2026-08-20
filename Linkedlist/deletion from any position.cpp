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
    int pos, count=1;
    cin>>pos;
    if(pos != 1){
    while(count<pos-1){
        temp = temp->next;
        count++;
    }
    temp1 = temp -> next;
    temp -> next = temp1 -> next;
    delete temp1;
    }
    else{
        head = head -> next;
        temp = temp -> next;
        delete temp1;
    }
    
    cout<<"Display Linked List"<<endl;
    temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }
    cout<<"NULL";
    return 0;
    
    
}