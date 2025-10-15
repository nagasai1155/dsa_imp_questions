#include<bits/stdc++.h>
using namespace std;

void printoddeven(vector<int> & arr){

    int n = arr.size();
    for(int i=1;i<n;i+=2){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    for(int i=0;i<n;i+=2){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr={1,2,3,4,5,8,9};
    printoddeven(arr);
}