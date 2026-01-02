#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> & arr){

    int n = arr.size();

    for(int i=1;i<n;i++){
        
            if(arr[i] < arr[i-1]) return false;
        
    }
    return true;
}

bool isarraysorted(vector<int> & arr){
  int n = arr.size();

  for(int i=0;i<n;i++){
    if(arr[i] > arr[i+1]){
      return false;
    }
  }
  return true;
}

int main(){

    vector<int> arr = { 1,2,5,16,7};
  bool ans=  isarraysorted(arr);
  if(ans==true) cout<<"array is in sorted order"<<endl;
  else cout<<"not in sorted order"<<endl;
}