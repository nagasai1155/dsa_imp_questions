#include<bits/stdc++.h>
using namespace std;

//brute
// int findlarge(vector<vector<int>> &ans){
//     int n = ans.size();int m = ans[0].size();
//     return ans[n-1][m-1];

// }

int findlarge1(vector<vector<int>> &ans){
    int n = ans.size();int m = ans[0].size();
    int large=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            large= max(large,ans[i][j]);
        }
    }
    return large;


}

// find second largest


int findlarge2(vector<vector<int>> &ans){
    int n = ans.size();int m = ans[0].size();
    int large=INT_MIN;
    int slarge=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x=ans[i][j];
            if(x > large){
                slarge=large;
                large=x;
            }else if(x < large && x > slarge){
                slarge=x;
            }
        }
    }
    return slarge;


}


int main(){
     vector<vector<int>> ans={{1,277,3,4},{5,6,7,48}};
    int res= findlarge2(ans);
    cout<<"largenumber: "<<res<<endl;
}