//remove duplicate elements from the array which in non-decreasing order

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//brute force
int removeDuplicates(vector<int> &arr){
    set<int> st;
    for(int i=0;i<arr.size();i++){
        st.insert(arr[i]);
    }
    int k = st.size();
    int j=0;
    for(int it:st){
        arr[j++] = it;
    }
    return k;


}
//optimal 

int removeDup(vector<int> & arr){
    int i=0;
    for(int j=i;j<arr.size();j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i]= arr[j];
        }
    }
    return i+1;
}


int main(){

    vector<int> arr={1,2,2,3,3,3,4,4,5};
    int ans=removeDup(arr);
    cout<<"size of elements are in unique: "<<ans;
}