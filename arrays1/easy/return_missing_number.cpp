#include<bits/stdc++.h>
using namespace std;

//better solution
int missingNumber(vector<int> & arr){
    int n = arr.size() + 1; // total numbers including the missing one
    vector<int> arr1(n+1,0);
    for(int i=0;i<arr.size();i++){
        arr1[arr[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(arr1[i]==0){
            return i;
        }
    }
    return -1;  
}
int main(){
    // return the missing number from the given number
    vector<int> arr={1,2,4,5,6};
    int n =missingNumber(arr);
    cout<<"missing number: "<<n<<endl;
}