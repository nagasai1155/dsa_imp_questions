#include<bits/stdc++.h>
using namespace std;

vector<int> fun(vector<int> & nums){
    int n = nums.size();
    map<int,int> mpp;
    
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
        cout<<mpp[nums[i]];

    }
    return {};
    



}

int main(){

    vector<int> nums={1,1};

   vector<int> ans= fun(nums);
   for(auto it:ans){
    cout<<it<<" ";
   }
}