#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    Node(int val,Node* next1){
        data= val;
        next= next1;
    }
    Node(int val){
        data=val;
        next=nullptr;
    }
};

class Linke{

    public:
    void traversal(Node* head){
        Node* temp=head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

};

int main(){
    Node* head= new Node(10);
    head->next= new Node(20);
    head->next->next= new Node(30);

    Linke l;
    l.traversal(head);

}