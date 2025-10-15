#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
       
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next = next1;
    }
};

bool detectLoop(Node* head){

    Node* slow=head;
    Node* fast = head;
    while( fast != NULL && fast ->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow){
            return true;
        }
    }
    return false;
    

}

int main(){
     
    vector<int> arr={1,2,3,4};
    Node* head= new Node(arr[0],nullptr);
    Node* first= new Node(arr[1],nullptr);
    Node* second= new Node(arr[2],nullptr);
    Node* third= new Node(arr[3],nullptr);

    head->next = first;
    first->next = second;
    second->next = third;
    //loop linked;
    third->next = nullptr;

    bool ans= detectLoop(head);

    if(ans){
        cout<<"loop found"<<endl;
    }else{
        cout<<"no loop"<<endl;
    }


    
}