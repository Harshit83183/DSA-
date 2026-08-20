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

void insertAtTail(Node* &tail, int d){
    Node*newnode = new Node(d);
    tail -> next = newnode;
    tail = newnode;
}

void insertAtMid(Node* &head, int pos, int d){
    Node*temp = head;
    int count = 1;
    while(count<pos-1){
        temp = temp->next;
        count++;
    }
    Node*newnode = new Node(d);
    newnode -> next = temp -> next;
    temp -> next = newnode;
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
    Node*tail = n1;
    insertAtTail(tail, 23);
    insertAtTail(tail, 13);
    insertAtTail(tail, 66);
    insertAtMid(head, 3, 22);
    print(head);
    return 0;
}