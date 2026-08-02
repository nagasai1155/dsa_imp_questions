#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data =data1;
        next=next1;

    }
    Node(int data1){
        data = data1;
        next=nullptr;
    }
};

Node* convertarrtoll(vector<int> & arr){
    Node* head = new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover=temp;
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

bool searchinll(Node* head,int tar){
      
    Node* temp= head;
    while(temp !=NULL){
        if(temp->data == tar){
            return true;
        }
        temp= temp->next;
    }
    return false;
}

int lengthofll(Node* head){
    Node* temp = head;
    int len=0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

int main(){
    vector<int> arr={1,2,3,4,45};
    Node* head=convertarrtoll(arr);
    lltraversal(head);
    bool res=searchinll(head,5);
    if(res){
        cout<<"found ele"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
    int ans=lengthofll(head);
    cout<<ans<<endl;

}