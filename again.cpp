#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int findLargestElement(vector<int>  &arr){

    int n = arr.size();
    sort(arr.begin(),arr.end());
    return arr[n-1];

}

//optimal
int findlar(vector<int> & arr){
    int maxi=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]> maxi){
            maxi=arr[i];
        }
    }
    return maxi;
}

int findsmallestElement(vector<int>  &arr){

    int n = arr.size();
    sort(arr.begin(),arr.end());
    return arr[0];

}

//optimal
int findsmall(vector<int> & arr){
    int mini=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]< mini){
            mini=arr[i];
        }
    }
    return mini;
}


//second largest element and second smallest element
void second_large_second_small(int arr[],int n){

    
    sort(arr,arr+n);
    int second_small=arr[1];
    int second_large=arr[n-2];
    cout<<"secondsmall: "<<second_small<<"and"<<"secondlarge: "<<second_large<<endl;
}

//better

int findsecondlargest(vector<int> &arr){
    int large= arr[0];

    for(int i=0;i<arr.size();i++){
        if(arr[i] > large){
            large= arr[i];
        }
    }

    int secondlarge=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i] != large && arr[i]>secondlarge){
            secondlarge=arr[i];
        }
    }
    return secondlarge;

}



int findsecondsmallest(vector<int> &arr){
    int small= arr[0];

    for(int i=0;i<arr.size();i++){
        if(arr[i] < small){
            small= arr[i];
        }
    }

    int secondsmall=INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(arr[i] != small && arr[i]< secondsmall){
            secondsmall=arr[i];
        }
    }
    return secondsmall;

}


//optimal
int findsecondlar(vector<int> & arr){
    int maxi=arr[0];
    int secondlar= INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i] > maxi){
            secondlar= maxi;
            maxi=arr[i];
        }else if(arr[i]!= maxi && arr[i]>secondlar){
            secondlar=arr[i];
        }
    }
    return secondlar;
}

int findsecondsmall(vector<int> & arr){
    int mini=arr[0];
    int secondsmall= INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i] < mini){
            secondsmall= mini;
            mini=arr[i];
        }else if(arr[i]!= mini && arr[i]<secondsmall){
            secondsmall=arr[i];
        }
    }
    return secondsmall;
}

int main(){

    vector<int> arr1={12,92,9,855,8};
   int ans= findsecondsmall(arr1);
   cout<<ans<<endl;
    // int arr[]={2,5,8,1,9};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // second_large_second_small(arr,n);
    
      
}