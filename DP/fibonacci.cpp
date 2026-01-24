#include<bits/stdc++.h>
using namespace std;
//fibonacci number using dp  //memoization;
//tc:o(n) sc:o(n)+ o(n)
int fun(int n,vector<int>& dp){

    if(n <=1){ 
        return n;

    }
    if(dp[n] !=-1) return dp[n];
    return dp[n]=fun(n-1,dp) +fun(n-2,dp);
}

//tabulation bottom -up (base case to answer)
//tc:o(n) sc:o(n);
int fun1(int n,vector<int>& dp){
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1] + dp[i-2];
    }
    return dp[n];

}

//space optimization
int fun2(int n ,vector<int> & dp){
    int prev=1;
    int prev2=0;
    for(int i=2;i<=n;i++){
        int curri= prev + prev2;
        prev2= prev;
        prev=curri;
    }
    return prev;
}

int main(){
   
    int n;
    cout<<"enter required number: ";
    cin>>n;
    vector<int> dp(n+1,-1);
   cout<< fun2(n,dp);
}