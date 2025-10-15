#include<bits/stdc++.h>
using namespace std;
int nonRep(vector<int> & arr){
   
    int n = arr.size();
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second ==1){
            return it.first;
        }
    }
    return 0;
}

vector<int> moveZeroes(vector<int> & arr)
{
    int n = arr.size();
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }
   int k = temp.size();
   

   for(int i=0;i<k;i++){
    arr[i]=temp[i];
   }

   for(int i=k;i<=n;i++){
    arr[i]=0;
   }

   return arr;

}
vector<int> movezeroes(vector<int> & arr){
    for(int i=0;i<arr.size();i++){
        if(arr[i] == 0){
            swap(arr[i],arr[i+1]);
        }
    }
    return arr;
}
int main(){
    vector<int> arr={1,0,4,4,5,5,0};
  int ans=  nonRep(arr);
  cout<<"non repeating chracter: "<<ans<<endl;
   vector<int> ans1= movezeroes(arr);
   for(auto it:ans1){
    cout<<it<<" ";
   }
}