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

Node* sortingll(Node* head){
    Node* current= head;
    while(current != NULL){
        Node* index= current->next;
        while(index != NULL){
            if(current->data > index->data){
                int temp = current->data;
                current->data=index->data;
                index->data= temp;
            }
            index=index->next;
        }
        current = current->next;
    }
    return head;
}


void traversal(Node* head){
    Node* temp = head;
    while(temp != NULL){
        
        cout<<temp->data<<"->";
        temp= temp->next;

    }
}

//reverse a linkedlist

Node* reversell(Node* head){
    Node* temp = head;
    stack<int> st;
    while(temp != NULL){
        st.push(temp->data);
        temp = temp->next;
    }
    Node* temp1 = head;
    while(temp1!=NULL){
        temp1->data = st.top();
        st.pop();
        temp1 = temp1->next;
    }
    return head;
}

int main(){

    Node* head= new Node(2,nullptr);
    head->next= new Node(4,nullptr);
    head->next->next= new Node(1,nullptr);
    head->next->next->next = new Node(3,nullptr);
    head->next->next->next->next = new Node(6,nullptr);
    Node* head1=sortingll(head);
    traversal(head1);
    cout<<"reverse ll: "<<endl;
    Node* head2= reversell(head);
    traversal(head2);


}
