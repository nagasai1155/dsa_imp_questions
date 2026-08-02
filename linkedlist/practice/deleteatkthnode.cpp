#include<bits/stdc++.h>
using namespace std;

//delete at kth node
struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next=next1;
    }
    Node(int data1){
        data = data1;
        next=nullptr;
    }
};

Node* deleteatkthnode(Node* head,int k){
    if(k==1){
        Node* temp = head;
        head=head->next;
        delete temp;
        return head;
    }
    int cnt=1;
    Node* temp=head;
    while(temp != NULL){
        
        if(cnt==k-1 && temp != NULL){
             Node* delnode=temp->next;
             temp->next=temp->next->next;
             delete delnode;
             break;
        }
        cnt++;
        temp=temp->next;
    }
    return head;
}
void lltraversal(Node* root){
    Node* temp = root;
    while(temp != NULL){
        cout<<temp->data;
        if(temp->next != nullptr){
            cout<<"->";
        }
        temp=temp->next;
        
       
    }
    cout<<endl;
}
int main(){
    int k=4;

  int arr[]={1,2,3,4,5};
  Node* head= new Node(arr[0]);
  Node* temp=head;
  for(int i=1;i<5;i++){
    temp->next=new Node(arr[i]);
    temp=temp->next;
  }

  Node* t=deleteatkthnode(head,k);
  lltraversal(t);


}