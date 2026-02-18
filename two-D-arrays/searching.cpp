#include<bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>>&ans,int k){
    //using optimal solution :binary search

    int n = ans.size();//row
    int m = ans[0].size();//col

    int low = 0,high=n*m-1;
    while(low <= high){
        int mid=(low+high)/2;

        int row=mid/m;
        int col=mid%m;

        if(ans[row][col]==k){
            return true;
        }else if(ans[row][col] < k){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return false;

}


int main(){
    // int n,m;
    // cin>>n>>m;
  //  vector<vector<int>> ans(n,vector<int>(m,0));
    int target=24;
    vector<vector<int>> ans={{1,2,3,4},{5,6,7,8}};

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>ans[i][j];
    //     }
    // }
    
    bool res=search(ans,target);
    if(res) cout<<"found"<<endl;
    else cout<<"not found"<<endl;
}