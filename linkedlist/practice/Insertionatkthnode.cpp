#include<bits/stdc++.h>
using namespace std;

struct Node{

    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data = data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* insertat(Node* head,int val, int k){
    if(k==1){
        return new Node(val,head);
    }
    Node* temp=head;
    int cnt=0;
    while(temp !=NULL){
         cnt++;
         if(cnt==k-1){
            Node* newNode= new Node(val,nullptr);
            newNode->next=temp->next;
            temp->next=newNode;
         }
         temp=temp->next;
         
    }
    return head;


}

void traversal(Node* head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}


int main(){

    int k=2;
    Node* head= new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(5);
   Node* t1= insertat(head,14,k);
   traversal(t1);




}