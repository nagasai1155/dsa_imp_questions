#include<bits/stdc++.h>
using namespace std;

//brute force tc:o(n^2) sc:o(1);
void findPairs(vector<int> & arr,int tar){

    int n = arr.size();
    bool check =false;
    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){

            if(arr[i] + arr[j] == tar){
                   
                cout<<"(" << arr[i]<<","<<arr[j]<<")"<<endl;
                check = true;
            }
        }
    }
    if(check == false){
        cout<<"no pairs were found"<<endl;
    }
}

//better solution tc:o(n) sc:o(n);
//using target-arr[i];

void findPairs1(vector<int> & arr,int target){

    map<int,int> mpp;
    vector<pair<int,int>> res;

    for(int i=0;i<arr.size();i++){
        int comp= target-arr[i];
        if(mpp.find(comp) != mpp.end()){
            res.push_back({comp,arr[i]});
        }

        mpp[arr[i]]++;


    }
    if(res.empty()){
        cout<<"not pairs found";
    }else{
        for(auto it:res){
            cout<<"("<<it.first<<","<<it.second<<")"<<endl;
        }
    }

}


int main(){

    vector<int> arr={1,3,4,6,-2,3,1,7,5};
    int target=3;
    findPairs(arr,target);
}