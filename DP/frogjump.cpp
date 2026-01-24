#include<bits/stdc++.h>
using namespace std;

//memoization

int minjumpenergy(int n,vector<int> &heights,vector<int>&dp){

    if(n==0) return 0;
    if(dp[n] !=-1) return dp[n];
    int left = minjumpenergy(n-1,heights,dp) + abs(heights[n] - heights[n-1]);
    int right = INT_MAX;
    if(n > 1){
        right = minjumpenergy(n-2,heights,dp) + abs(heights[n]-heights[n-2]);
    }
   return dp[n]=min(left,right);

}
//with k distance as above code memoization

int minjump(int n,int k, vector<int>& heights,vector<int>&dp){
    if(n==0) return 0;

    if(dp[n] !=-1) return dp[n];
   int mincost =INT_MAX;
    for(int i=1;i<=k;i++){
        int jump=minjump(n-i,k,heights,dp) + abs(heights[n] - heights[n-i]);
        mincost= min(jump,mincost);
    }
    return dp[n]=mincost;
}

int main(){
    int n;
    cin>>n;

    vector<int> heights(n);

    for(int i=0;i<n;i++){
       
        cin>>heights[i];
    }
    vector<int> dp(n,-1);

   cout<< minjumpenergy(n-1,heights,dp);
    
}