//find larget element in the array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//brute force
//tc:o(nlogn) sc:o(1)
int largestElement(vector<int> & arr){

    int n = arr.size();
    sort(arr.begin(),arr.end());
    return arr[n-1];

}

//optimal 
//tc:o(n) sc:o(1)
int largestEle(vector<int> & arr){

    int n = arr.size();
    int maxi= arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > maxi){
            maxi= arr[i];
        }
    }
    return maxi;
}
int slargest(vector<int> & arr){
    int large=arr[0];
    int slarge=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i] > large){
            slarge=large;
            large=arr[i];
        }else if(arr[i] < large && arr[i] > slarge){
            slarge = arr[i];
        }
    }
    return slarge;
}

int main(){


    vector<int> arr = {1,2,5,12,7,4,9};
    int res = slargest(arr);
    cout<<"slargest element: "<< res<<endl;

}