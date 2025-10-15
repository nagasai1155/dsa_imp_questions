#include<bits/stdc++.h>
using namespace std;
//two pointersapporocah

vector<int> movezerostoend(vector<int> &arr,int n){

    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i] ==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(arr[i] !=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return arr;
}

int main(){
    
    vector<int> ar={1,2,1,0,0,3,4,0,56};
    int n = ar.size();
   vector<int> ans= movezerostoend(ar,n);
   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }

}