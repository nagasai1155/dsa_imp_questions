#include<bits/stdc++.h>
using namespace std;

//tc:o(nlogn) sc:o(n);
//if used unordered_map tc:o(n);
//better solution

void find_duplicate(vector<int> & arr){
    int n = arr.size();
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second >=2){
            cout<<it.first<<endl;
        }
    }
}

//optimal solution

int main(){
    vector<int> arr = {1,2,2,3,4,4,4,5};
    find_duplicate(arr);

}