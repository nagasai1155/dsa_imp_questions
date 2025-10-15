#include<bits/stdc++.h>
using namespace std;

void countFrequency(string arr[],int n){

    unordered_map<string,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
       cout<<arr[i]<<":"<<mpp[arr[i]]<<endl;
    }

}

int main(){

    string arr[] = {"nagasai","surya","nagasai","surya","kohli","sharma"};
    int n = 6;
    countFrequency(arr,n);
}