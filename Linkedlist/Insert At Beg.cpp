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
    for(int i=0; i<n; i++){
        cin>>value;
        Node*newnode = new Node(value);
        if(head == NULL){
            head = newnode;
            temp = newnode;
        }
        else{
            temp -> next = newnode;
            temp = newnode;
        }
        
    }
    temp = head;
    int a;
    cin>>a;
    Node*insert = new Node(a);
    temp = insert;
    temp -> next = head;
    head = temp;
    
    temp = head;
    cout<<"Display Lisked List"<<endl;
    while(temp != NULL){
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }
    cout<<"NULL";
    return 0;
    
}