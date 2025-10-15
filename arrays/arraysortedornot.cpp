//check the array is sorted in ascendinf order or not

#include<iostream>
using namespace std;
 
bool isSorted(int arr[],int n){
   
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]) return false;
        }
    }
    return true;
}
bool isSorted1(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i] <arr[i-1]) return false;
    }
    return true;
}

int main(){
    int arr[5]={1,21,3,4,5},n=5;
    bool res=isSorted1(arr,n);
    cout<<res<<" final"<<endl;
}