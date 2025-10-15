#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    public:
    Node (int data1,Node* next1){
        data =data1;
        next = next1;
    }
    public:
     Node(int data1){
        data =data1;
        next = nullptr;
    }

};

Node* deleteHead(Node* head){

    if(head== NULL) return head;

    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* deleteTail(Node* head){

      if(head== NULL) return head;
    

    Node* temp = head;
    while(temp ->next ->next != NULL){
        temp = temp->next;

    }
    delete temp->next;
    temp ->next= nullptr;

    return head;

}



void * printLL(Node* head){
    if(head == NULL) return head;
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

int main(){

    vector<int> arr={1,2,3,4,5,6};
    Node* head= new Node(arr[0],nullptr);
    head->next = new Node(arr[1],nullptr);
    head->next->next= new Node(arr[2],nullptr);
    head->next->next ->next = new Node(arr[3],nullptr);
    head->next->next ->next ->next = new Node(arr[4],nullptr);
    head->next->next ->next ->next->next = new Node(arr[5],nullptr);

    head = deleteTail(head);

    printLL(head);
    




}