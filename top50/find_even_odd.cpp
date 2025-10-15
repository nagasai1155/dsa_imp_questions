#include<bits/stdc++.h>
using namespace std;

void find_even_odd(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        if(arr[i] %2 ==0){
            cout<<"even numbers: "<<arr[i]<<" ";
        }else{
            cout<<"odd numbers: "<<arr[i]<<" ";
        }
    }
}

int main(){
    vector<int> arr={1,2,3,4,5};
    find_even_odd(arr);
}