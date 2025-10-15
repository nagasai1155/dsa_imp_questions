#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//tortoise and hare method
class Node{

    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data= data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};


Node* findMiddleNode(Node* head){

    if(head == NULL && head->next == NULL){
        return head;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast ->next != NULL){
        slow = slow->next;

        fast = fast->next->next;
    }
    return slow;
}

void * printLL(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;

    }
}
int main(){

    vector<int> arr ={1,2,44,6,7};
    Node* head = new Node(arr[0],nullptr);
    head ->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next= new Node(arr[3]);
    head->next->next->next->next= new Node(arr[4]);
    head = findMiddleNode(head);

    cout<<head->data;
    // printLL(head);
    


}