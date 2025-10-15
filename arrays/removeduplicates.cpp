#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> removeDup(vector<int> &arr){
    int n = arr.size();
    set<int> s;
    for(int i:arr){
        s.insert(i);
    }
    int k = s.size();
    int j=0;
    for(int a:s){
        arr[j++]=a;
    }
    return arr;
}

int main(){
    vector<int> arr={11,2,2,11,4,5,63,23,4,2,2,3,4,3};
   vector<int> arr1= removeDup(arr);
   for(int i=0;i<arr1.size();i++){
    cout<<arr1[i]<<" ";
   }
}



//optimal 

int removeDup1(vector<int> &arr){
    int n = arr.size();
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i+1]=arr[j];
        }
    }
    return i+1;
}