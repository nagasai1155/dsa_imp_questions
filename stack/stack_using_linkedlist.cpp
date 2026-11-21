#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int x){
        data=x;
        next=nullptr;
    }

};
class MyStack{
    public:
    Node* top;
    int count;
    public:
    MyStack(){
        top=nullptr;
        count=0;
    }

   

    void push(int val){
       
        Node* newNode=new Node(val);
        newNode->next=top;
        top=newNode;
       
        count++;
    }

     bool isEmpty(){
        return top==nullptr;
    }

    void pop(){
        if(isEmpty()) return;
        Node* temp=top;
        top=top->next;
        delete temp;
        count--;
    }

    int peek(){
        if(isEmpty()) return -1;
        return top->data;
    }
    int size(){
        return count;
    }
};
int main(){
    MyStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<"peek:"<<st.peek()<<endl;
    st.pop();
    cout<< "peek after: "<<st.peek()<<endl;
    cout<<st.size();

}