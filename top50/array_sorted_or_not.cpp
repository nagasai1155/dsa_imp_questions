#include<bits/stdc++.h>
using namespace std;

//brute force solution o(n^2); sc:o(1);
bool isSorted(vector<int> & arr){

    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){

            if(arr[j] < arr[i]){
                return false;
            }

        }
    }
    return true;
}
//optimal solution 
bool isSorted1(vector<int> & arr){

    for(int i=0;i<arr.size();i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){

    vector<int> arr={1,43,5};
    bool  ans=isSorted1(arr);
    if(ans){
        cout<<"array is in sorted order"<<endl;
    }else{
        cout<<"array is not in sorted order"<<endl;
    }
    

}