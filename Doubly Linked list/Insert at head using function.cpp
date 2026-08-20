#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*prev;
    Node*next;
    
    Node(int value){
        data = value;
        prev = NULL;
        next = NULL;
    }
};

void print(Node* &head){
    Node*temp = head;
    while(temp != NULL){
        cout<<temp -> data<<' ';
        temp = temp -> next;
    }
    cout<<endl;
}
int getlength(Node* head){
    int len = 0;
    Node*temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}
void insertAtHead(Node* &head, int d){
    Node*newnode = new Node(d);
    newnode -> next = head;
    head -> prev = newnode;
    head = newnode;
}
int main (){
    Node*n1 = new Node(10);
    Node*head = n1;
    insertAtHead(head, 11);
    print(head);
    return 0;
}