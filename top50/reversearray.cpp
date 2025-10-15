#include<bits/stdc++.h>
using namespace std;
//brute force tc:o(n);
void reverse1(vector<int>& arr){
    reverse(arr.begin(),arr.end());
    for(auto it:arr){
        cout<<it<<" ";
    }
}
//better

vector<int> reverse2(vector<int> & arr){
    int n = arr.size();
    int left =0;
    int right = n-1;
    while(left < right){
        int temp = arr[left];
        arr[left]=arr[right];
        arr[right]=temp;

        left++;
        right--;

    }
    return arr;
}

int main(){
    vector<int> arr={1,2,3,4,5};
    vector<int> ans=reverse2(arr);
    for(auto it:ans){
        cout<<it<<" ";
    }
}