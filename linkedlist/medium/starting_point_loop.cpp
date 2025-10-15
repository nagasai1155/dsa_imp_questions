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
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* startingPointLoop(Node* head){

    Node* slow= head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
         slow= slow->next;
         fast = fast->next->next;

         if(slow == fast){

            slow=head;
            while(slow != fast)
            {
                slow= slow->next;
                fast = fast->next;
            }
            return slow;
         }
    }
    return NULL;

}

int main(){

    vector<int> arr={1,2,3,4,5};

    Node* head = new Node(arr[0]);
    Node* first = new Node(arr[1]);
    Node* second = new Node(arr[2]);
    Node* third = new Node(arr[3]);
    Node* fourth = new Node(arr[4]);

    //link the nodes with loop

    head->next = first;
    first->next=second;
    second->next = third;
    third->next = fourth;
    fourth->next = third;

    Node* start =startingPointLoop(head);
    cout<<start->data;

}