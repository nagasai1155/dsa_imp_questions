#include<bits/stdc++.h>
using namespace  std;
//largest elements in the array  
//better solution.
int sorting(int arr[],int n){
    
    int largest =arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            largest=arr[i];
        }
    }
    return largest;
      
}

int main(){

    int arr[5]={1,2,3,43,12};
    int n= sizeof(arr)/sizeof(arr[0]);
   int res= sorting(arr,n);
   cout<<"largest element: "<<res<<" "<<endl;
    
}


//brute force solution

int sortting(vector<int> &arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];

}
int main(){
    vector<int> arr={1,2,11,2223,5};
    sortting(arr);
}