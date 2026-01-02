#include<bits/stdc++.h>
using namespace std;
int commulativeNumber(vector<int> & arr){
    int cnt=0;
    int maxi=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]== 1){
            cnt++;
        
        }else{
            cnt=0;
        }
        maxi= max(cnt,maxi);
    }
    return maxi;
}

int cones(vector<int> & arr){
    int n = arr.size();
    int cnt=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
        }else{
            cnt=0;
        }
        maxi=max(cnt,maxi);

    }
    return maxi;
}

int main(){
     vector<int> arr={1,1,1,0,5,6,1,1,1,1};
    int n =cones(arr);
    cout<<"commulativeNumber number: "<<n<<endl;
}