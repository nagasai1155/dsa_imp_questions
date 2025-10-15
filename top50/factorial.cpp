#include<bits/stdc++.h>
using namespace std;
//brute o(n) and space :o(n) recusive stack space
int factorial(int n){
    if(n==0 || n==1) return 1;

    return n* factorial(n-1);
}

//optimal

int factorial1(int n){
    int fact=1;

    for(int i=2;i<=n;i++){
        fact *=i;
    }
    return fact;
}

int main(){
    int n =5;
   int ans= factorial1(n);
   cout<<ans<<" ";
}