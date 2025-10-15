#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//brute force
void solveLeftRotate(vector<int> arr){
    int n = arr.size();
    vector<int> temp(n);
    for(int i=1;i<n;i++){
        temp[i-1]=arr[i];
    }
    temp[n-1]= arr[0];

    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }

}
//optimal 

vector<int> leftRotate(vector<int> & arr){
    int n = arr.size();
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}

int main(){


    vector<int> arr={1,2,3,4,5};
 vector<int> ans=   leftRotate(arr);
 for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" "<<endl;
 }

}