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

vector<int> unio_of_sorted_arrays(vector<int> & arr1,vector<int> & arr2){
    map<int,int>mpp;
    for(int i=0;i<arr1.size();i++){
        mpp[arr1[i]]++;
    }
    for(int i=0;i<arr2.size();i++){
        mpp[arr2[i]]++;
    }
    vector<int> uni;
    for(auto it:mpp){
       
            uni.push_back(it.first);
        
    }
    return uni;

}
//intersecton 
vector<int> intersection_of_sorted_arrays(vector<int> & arr1, vector<int> & arr2){
    map<int, int> mpp;
    for(int num : arr1) mpp[num]++;

    vector<int> inter;

    for(int num : arr2){
        if(mpp[num] > 0){
            inter.push_back(num);
            mpp[num] = 0; // mark as used to avoid duplicates
        }
    }
    return inter;
}

int main(){
    //find the union of two sorted arrays
    vector<int> arr1={1,1,2,3,4,5};
    vector<int> arr2 ={2,3,4,6,7,9};
  vector<int> ans= unio_of_sorted_arrays(arr1,arr2);
   for(auto it:ans){
    cout<<it<<" ";
   }

}