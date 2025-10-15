//brute force second largest element and second smallest element in array

#include<bits/stdc++.h>
using namespace std;

// void sortting(vector<int>&arr){
//     int n = arr.size();
//     sort(arr.begin(),arr.end());
//     int secondsmallest=arr[1];
//     int secondlargest=arr[n-2];
//     cout<<secondsmallest<<" "<<secondlargest<<endl;

// }

// int main(){

//     int n;
//     cout<<"enter size of the arr: ";
//     cin>>n;

//     vector<int> arr;

//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         arr.push_back(x);
//     }
//     sortting(arr);
// }


//better solution second smallest

int sorttingsecondsmall(vector<int> &arr){
    if(arr.size()==0 || arr.size()==1)
        return -1;
    int n = arr.size();
    int small =INT_MAX,second_small=INT_MAX;
    // int large =INT_MIN,second_large=INT_MIN;
    for(int i=0;i<n;i++){
        small = min(small,arr[i]);
        // large=max(large,arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i]<second_small && arr[i] !=small){
            second_small = arr[i];
        }
    }
    return second_small;
    
}

int sorttingsecondlarge(vector<int>& arr){
    if(arr.size()==0 || arr.size()==1)
        return -1;
    int n = arr.size();

    int large =INT_MIN,second_large=INT_MIN;
    for(int i=0;i<n;i++){
        large=max(large,arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>second_large && arr[i] !=large){
            second_large=arr[i];
        }
    }
    return second_large;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x1=sorttingsecondsmall(arr);
    cout<<"second small"<<x1<<endl;
    int x2=sorttingsecondlarge(arr);
    cout<<"second large"<<x2<<endl;

     

}