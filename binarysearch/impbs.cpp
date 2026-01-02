#include<bits/stdc++.h>
using namespace std;

// int binarysearch(vector<int> & arr,int tar,int low,int high){
//     while(low <= high){
//         int mid = (low + high)/2;

//         if(arr[mid]== tar) return mid;

//         else if(arr[mid]< tar){
//             low = mid+1;
//         }else{
//             high = mid-1;
//         }
//     }
//     return 0;
// }

// int lowerbound(vector<int> &arr,int n,int key){
//     int n = arr.size();
//     int low =0;
//     int high = n-1;
//     int ans=n;
//     while(low <=high){
//         int mid= (low+high)/2;
//         if(arr[mid] >= key){
//             ans= mid;
//             high = mid-1;
//         }else {
//             low = mid+1;
//         }
//     }
//     return ans;
// }

int upper_bound(vector<int> & arr,int target){
    int n = arr.size();
    int low=0;
    int high = n-1;
    //smallest index should be grater the target
    int ans=n;
    while(low<=high){
        int mid= (low+high)/2;
        if(arr[mid]>target){
            ans=mid;
            high =mid-1;
        }else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){

    vector<int> arr={1,2,4,5,7,9,11};
   
    int target = 9;
  int x=  upper_bound(arr,target);
  cout<<x<<endl;
}