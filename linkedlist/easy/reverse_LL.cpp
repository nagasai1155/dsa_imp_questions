#include<bits/stdc++.h>
using namespace std;
class Node{

    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    
};

Node* reverseLL(Node* head){
    stack<int> st;
    Node* temp = head;
    while(temp != NULL){
        st.push(temp->data);
        temp= temp->next;
    }
    temp = head;
    while(temp != NULL){
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
    return head;
}
Node* reversell(Node* head){
    if(head == NULL || head->next == nullptr) return head;

    Node* temp = head;
    Node* prev= NULL;
    while(temp != NULL){
        Node* front = temp->next;
        temp ->next = prev;
        prev=temp;

        temp= front;


    }
    return prev;
}
void * traversal(Node* head){

    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }

}

int main(){

    vector<int> arr={1,2,3,4};
    Node* head = new Node(arr[0],nullptr);
    head->next= new Node(arr[1],nullptr);
    head->next->next= new Node(arr[2],nullptr);
    head->next->next->next = new Node(arr[3],nullptr);

  head =  reversell(head);

    traversal(head);

}