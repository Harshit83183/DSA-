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

void insertAtHead(Node* &head, int d){
    Node*newnode = new Node(d);
    newnode -> next = head;
    head = newnode;
}

void print(Node* &head){
    Node*temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main (){
    Node*n1 = new Node(12);
    Node*head = n1;
    insertAtHead(head, 23);
    insertAtHead(head, 13);
    insertAtHead(head, 66);
    print(head);
    return 0;
}