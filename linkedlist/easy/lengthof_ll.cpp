#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next ;

    public:
    Node(int data1,Node* next1){
         data = data1;
        Node* next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

int lengthofLL(Node* head){

    int cnt=0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        temp = temp->next;

    }
    return cnt;
}

void * printLL(Node* head){

    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

int main(){


    vector<int> arr={1,2,3};
    Node* head = new Node(arr[0]);
    head ->next = new Node(arr[1]);
    head ->next->next = new Node(arr[2]);

int n =lengthofLL(head);
cout<<n<<endl;

    printLL(head);

}