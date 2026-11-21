#include<bits/stdc++.h>
using namespace std;
//tc:2^n * n
void printF(int ind,vector<int> &ds,vector<int> &ans,int n){

    if(ind==n){
        for(int num:ds){
            cout<<num<<" ";
        }
        if(ds.size()==0) cout<<"{}";
        cout<<endl;
        return;
      }
        //pick
        ds.push_back(ans[ind]);
        printF(ind+1,ds,ans,n);

        //not pick
        ds.pop_back();
        printF(ind+1,ds,ans,n);
    }


int main(){
    //print subsquences -> continguos or non contiguos which follows order of array
    vector<int> ans={3,2,1};
    int n=3;
    vector<int> ds;
    printF(0,ds,ans,n);
}