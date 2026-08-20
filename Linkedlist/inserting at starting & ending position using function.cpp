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
void insertAtHead(Node* &head, int a){
    Node*newnode = new Node(a);
    newnode -> next = head;
    head = newnode;
}

void insertAtTail(Node* &tail, int d){
    Node*newnode = new Node(d);
    tail -> next = newnode;
    tail = newnode;
}

void insertAtMid(Node* &tail, Node* &head, int pos, int d){
    // if insert at first postion
    if(pos == 1){
        insertAtHead(head, d);
        return ;
    }
    
    Node*temp = head;
    int count = 1;
    while(count<pos-1){
        temp = temp->next;
        count++;
    }
    // insert at last position
    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
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
    insertAtMid(tail, head, 5, 22);
    print(head);
    cout<<"head"<<head -> data<<endl;
    cout<<"tail"<<tail -> data<<endl;
    return 0;
}