#include<bits/stdc++.h>
using namespace std;

int secondSmallest(vector<int> & arr){
    int small=arr[0];
    int ssmall=INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(arr[i]< small){
            ssmall=small;
            small=arr[i];
        }else if(arr[i]> small && arr[i]<ssmall){
            ssmall=arr[i];
        }
    }
    return ssmall;
}

int main(){
    vector<int> arr={2,4,5,7};
  int ans=  secondSmallest(arr);
  cout<<"second Smallest: "<<ans<<endl;
}