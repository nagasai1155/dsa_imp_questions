#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
   
    public:
           int data;
           Node* next;
    public:
           Node(int data1,Node* next1){
            data =data1;
            next = next1;
           }
};
//question insert val at kth position in the exisitnt linkedlist
Node* insertionatkth (Node* head,int val,int k){
    if(head == NULL){
        if(k==1){
            return new Node(val,head);
        }else{
            return head;
        }
    }
    if(k==1){
        return new Node(val,head);
    }

    int cnt=0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k-1){
            Node* newNode= new Node(val,nullptr);
            newNode->next = temp->next;
            temp->next = newNode;
            break;


        }
        temp= temp->next;
    }
    return head;
}

void traversal(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp =temp->next;
    }
}

int main(){

    Node* head = new Node(1,nullptr);
    head->next = new Node(2,nullptr);
    head->next->next = new Node(4,nullptr);
   Node* head1= insertionatkth(head,3,3);
    traversal(head1);

}