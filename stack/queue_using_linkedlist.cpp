#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public: 
    Node(int val){
        data=val;
        next=nullptr;
    }

};

class myQueue{

    public:
    Node* front;
    Node* rear;
    int cnt;

    myQueue(){
        front=rear=nullptr;
        cnt=0;
    }

    bool isEmpty(){
        return front==nullptr;
    }

    void push(int x){
        Node* newNode=new Node(x);

      if(isEmpty()){
        front=rear=newNode;
      }else{
        rear->next=newNode;
        rear=newNode;
      }
    }
    void pop(){
        if(isEmpty()) return;
        Node* temp=front;
        front=front->next;
        delete temp;
        cnt--;
    }
    int size(){
        return cnt;
    }
    int peek(){
        if(isEmpty()) return -1;
        return front->data;
    }

};

int main(){

    myQueue st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.peek();
    st.pop();
    cout<<st.peek();


}