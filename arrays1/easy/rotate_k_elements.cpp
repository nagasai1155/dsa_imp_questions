#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void reverse(vector<int> & arr,int start,int end){
    while(start<=end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotatetoleft(vector<int> & arr,int k){
    int n = arr.size();
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
}

void rotatetoright(vector<int> & arr,int k){
    int n = arr.size();
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-k-1);
    reverse(arr,0,n-1);
}

int main(){
    vector<int> arr={1,2,3,4,5,6};
    int k=2;
    rotatetoright(arr,k);
    for(auto it:arr){
        cout<<it<<" ";
    }
}