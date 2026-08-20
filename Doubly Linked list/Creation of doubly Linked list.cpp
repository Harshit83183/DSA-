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
    Node*newnode = new Node(12);
    cout<<newnode -> data<<endl;
    return 0;
}