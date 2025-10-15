#include<bits/stdc++.h>
using namespace std;

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
        data= data1;
        next = nullptr;
    }
    

};

Node* sortLL(Node* head){
    if(head == NULL || head->next == NULL) return head;

    Node* temp = head;
    vector<int> arr;
    while(temp != NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    sort(arr.begin(),arr.end());
    
    temp = head;

    for(int i=0;i<arr.size();i++){
        temp->data = arr[i];
        temp=temp->next;
    }

    return head;
}

void* traversal(Node* head){

    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}


int main(){

    vector<int> arr= {1,33,41,2,9};
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next= new Node(arr[3]);
    head->next->next->next->next= new Node(arr[4]);

    traversal(head);
cout<<endl;
    Node* head1=sortLL(head);
    traversal(head1);





}