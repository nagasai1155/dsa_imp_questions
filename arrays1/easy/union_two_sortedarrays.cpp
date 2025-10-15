#include<bits/stdc++.h>
using namespace std;


vector<int> uniosOfSortedArrays(vector<int> & arr1,vector<int> & arr2){
    map<int,int> mpp;//value,index
    vector<int> temp;
    for(int i=0;i<arr1.size();i++){
        mpp[arr1[i]]++;
    }
    for(int i=0;i<arr2.size();i++){
        mpp[arr2[i]]++;
    }

    for(auto it:mpp){
        temp.push_back(it.first);
    }
return temp;

}

int main(){
    //find the union of two sorted arrays
    vector<int> arr1={1,2,3,4,5};
    vector<int> arr2 ={2,3,4,6,7,9};
   vector<int> ans= uniosOfSortedArrays(arr1,arr2);
   for(auto it:ans){
    cout<<it<<" ";
   }

}