#include<bits/stdc++.h>
using namespace std;

//brute tc:o(nlogn) sc:o(n)
vector<int> removeDuplicates(vector<int> & arr){

    int n = arr.size();
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int j=0;
    vector<int> temp;
    for(auto it:st){
        arr[j++]=it;
        temp.push_back(it);
        
    }
    return temp;
}

//better tc:o(n) sc:o(n)
vector<int> removeDuplicates1(vector<int> & arr){

    int n = arr.size();
    unordered_set<int> st;
    vector<int> temp;
    for(int it:arr){
        if(st.find(it) == st.end()){
            temp.push_back(it);
            st.insert(it);
        }
    }
    return temp;
}

int main(){

    vector<int> arr={1,1,2,2,3,4,9,9,5};
  vector<int> ans=  removeDuplicates1(arr);
  for(auto it:ans){
    cout<<it<<" ";
  }
}