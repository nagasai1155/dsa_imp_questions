#include<bits/stdc++.h>
using namespace std;

void leftRotate(int n, vector<int> &arr,int k){

    k = k%n;
    vector<int> temp;
 
    //collect first 3 elements

    for(int i=0;i<k;i++){
        temp.push_back(arr[i]);

    }
    //move the back elements upto 2 place on each
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    //from the temp we have replace in the arr of first 3 elelments
    for(int i=n-k;i<n;i++){
        arr[i] = temp[i-(n-k)];
    }


}

void reverserightrotation(int n,vector<int>& arr,int k){
    k = k%n;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
}
int main(){
    int n=5;
    int k=2;
    vector<int> arr={1,2,3,4,5};
    reverserightrotation(n,arr,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


//reverse algorithm

void Reversealgo(int arr[],int start,int right){

    while(start<=right){
        int temp = arr[start];
        arr[start] =arr[right];
        arr[right] = temp;
        start++;
        right--;
    }
}
