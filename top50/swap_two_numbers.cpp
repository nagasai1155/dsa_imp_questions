#include<bits/stdc++.h>
using namespace std;

void swapNumber(int a,int b){
    int temp =a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
}

void swapNumber1(int a,int b){
    cout<<"before swap: "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"after swap"<<a<<" "<<b<<endl;

}

//without temp variable

void swapNumber2(int a,int b){

    a = a+b;
    b=a-b;
    a = a-b;
    cout<<a<<" :"<<b<<endl;
}

void swapNumbers3(int a,int b){
    a = a^ b;
    b=a^b;
    a = a^b;
    cout<<a<<" "<<b<<endl;
}
int main(){

    int a =100;
    int b=20;
    swapNumbers3(a,b);
   
   


}