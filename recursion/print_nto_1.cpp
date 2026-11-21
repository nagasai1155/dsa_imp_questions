#include<bits/stdc++.h>
using namespace std;

void print(int i,int n){
    if(n==i) return;
    cout<<n<<" ";
    print(i,n-1);
}

int main(){
    int n=4;
    print(0,n);
}