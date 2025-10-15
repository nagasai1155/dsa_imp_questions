#include<bits/stdc++.h>
using namespace std;

int findLargest(int arr[],int n){
    
    int large=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > large){
            large=arr[i];
        }

    }
    return large;
}

//brute

int findLargest1(int arr[],int n){

    sort(arr,arr+n);
    return arr[n-1];
}
//finding both large ans second largest in the array in one method

void findlarge_secondlarge(int arr[],int n){

    int large=arr[0];
    int slarge=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > large){
            slarge=large;
            large=arr[i];
        }else if(arr[i]> slarge && arr[i] != large){
            slarge=arr[i];
        }
    }
    cout<<"slarge: "<<slarge<<endl;
    cout<<"large: "<<large<<endl;

}


//another question
//find second largest

int secondLargest(int arr[],int n){

    int large=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > large){
            large=arr[i];
        }
    }

    int sl=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > sl && arr[i] !=large){
            sl=arr[i];
        }
    }
    return sl;
}

int main(){

    int arr[]={90,12,4,88,9};
    int n = sizeof(arr)/sizeof(arr[0]);
findlarge_secondlarge(arr,n);
}