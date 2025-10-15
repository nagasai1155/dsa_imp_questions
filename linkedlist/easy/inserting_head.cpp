#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};

Node *insertHead(Node *head, int val)
{
    if (head == NULL)
        return head;

    Node *newNode = new Node(val, head);
    return newNode;
}

Node* insertTail(Node* head,int val){
    Node* newNode= new Node(val,nullptr);
    Node* temp = head;
    while(temp->next != NULL){
    temp = temp->next;

    }
    temp->next= newNode;
    return head;
}

void *printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

int main()
{

    vector<int> arr = {1, 2, 3, 4};
    int val = 100;
    Node *head = new Node(arr[0], nullptr);
    head->next = new Node(arr[1], nullptr);
    head->next->next = new Node(arr[2], nullptr);
    head->next->next->next = new Node(arr[3], nullptr);

    head = insertTail(head, val);
    printLL(head);
}
