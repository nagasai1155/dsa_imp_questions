#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node * next;
    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }

};

Node* covertarrtoll(vector<int> &arr){
    Node* head = new Node(arr[0],nullptr);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr);
        mover->next = temp;
        mover= temp;
    }
    return head;

}

int  lengthofll(Node* head){
     int cnt=0;
     Node* temp = head;
     while(temp != nullptr){
        cnt++;
        temp=temp->next;
     }
     return cnt;

     
}

int searcheleinll(Node* head,int val){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == val){
            
         
            return 1;
        }
           temp = temp->next;
    }
    return -1;
}

Node* lltraversal(Node* head){
    Node* temp = head;
    while(temp->next != NULL){
        cout<<temp->data<<"->"<<" ";
        temp= temp->next;
    }
}
int main(){
    vector<int> arr= {1,2,3,4,5,6};
    Node* head = covertarrtoll(arr);
    lltraversal(head);cout<<endl;
   int ll= lengthofll(head);
   cout<<"length of linkedlist: "<< ll<<endl;
   int finds=searcheleinll(head,9);
   cout<<finds;
  
    
}