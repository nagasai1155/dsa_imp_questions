#include<bits/stdc++.h>
using namespace std;


//using backtracking 1 to n
void print(int i,int n){

    if(i<1) return;
    print(i-1,n);
    cout<<i<<" ";
}
//using backtracking n to 1
void print1(int i,int n){
    if(i>n) return;
    print1(i+1,n);
    cout<<i<<" ";
}
int main(){
    int n=4;
    print1(1,n);
}