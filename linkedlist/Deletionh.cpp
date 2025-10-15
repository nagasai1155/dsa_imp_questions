#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }

};

Node* deletehead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    
    head = head->next;

    delete temp;
    return head;
}

Node* deletetail(Node* head){
    if(head == NULL) return NULL;
    Node* temp = head;
    while(temp ->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}



Node* covertarrtoll(vector<int> &arr){
    Node* head = new Node(arr[0],nullptr);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr);
        mover->next = temp;
        mover = temp;

    }
    return head;

}

Node* lltraversal(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

int main(){
     vector<int> arr= {1,2,3,4,5,6};
    Node* head = covertarrtoll(arr);
    lltraversal(head);
   Node* head1 =deletehead(head);
    cout<<"after head deletion"<<endl;
     lltraversal(head1);

     cout<<"delte tail"<<endl;
     Node* head2=deletetail(head1);
     lltraversal(head2);

     Node* head = new Node(1,nullptr);
     head->next = new Node(2,nullptr);
     head->next->next = new Node(3,nullptr);
}