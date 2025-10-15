#include<bits/stdc++.h>
using namespace std;

int findSmallest(vector<int> & arr){
    int n = arr.size();
    int small = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i] < small){
            small = arr[i];
        }
    }
    return small;
}

int findSmallest1(vector<int> & arr){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    return arr[0];

}
//second smallest
int secondSmallest(vector<int>& arr){

    int small=INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(arr[i]< small){
            small=arr[i];
        }
    }

    int ss=INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(arr[i] <ss && arr[i] !=small){
            ss=arr[i];
        }
    }
    return ss;
}



int main(){
    vector<int> arr={2,55,7,89,0};
    int ans= secondSmallest(arr);
    cout<<"second smallest element: "<<ans<<endl;
}