#include<bits/stdc++.h>
using namespace std;

//using parameter
void print(int n,int sum){

    if(n<1){
        cout<<sum<<" ";
        return;
    }
    print(n-1,sum +n);
}
//using functional return
int fun(int n){
    if(n==0) return 0;
    return n+fun(n-1);
}
//factorial
int fun1(int n){
    if(n==0) return 1;
    return n*fun(n-1);
}
//using loop
void fun2(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact *=i;
    }
    cout<<fact;
}
int main(){
    int n=4;
    //using for loop
    // int sum=0;
    // for(int i=1;i<=n;i++){
    //     sum +=i;
    // }
    // cout<<sum;
   // print(n,0);
  //cout<< fun(n);
  fun2(n);
}