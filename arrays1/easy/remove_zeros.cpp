#include<bits/stdc++.h>
using namespace std;

vector<int>  removeZeros(vector<int> & arr){
    vector<int> temp;
    for(int i=0;i<arr.size();i++){
        if(arr[i] !=0){
            temp.push_back(arr[i]);
        }
    }
    int nz= temp.size();
    for(int i=0;i<nz;i++){
        arr[i] = temp[i];
    }

    for(int i=nz;i<arr.size();i++){
        arr[i]=0;
    }
    return arr;
}

int main(){
    vector<int> arr={1,0,2,3,0,4,3,0,5,6,0};
  vector<int> ans=  removeZeros(arr);
  for(auto it:ans){
    cout<<it<<" ";
  }
}