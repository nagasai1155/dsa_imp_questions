#include<bits/stdc++.h>
using namespace std;
//recursion was top down approach
void print(int i,int n){

   if(i> n) return;
    
    cout<<"nagasai"<<" ";
    print(i+1,n);

}
int main(){
    int n=3;
    cin>>n;
    print(1,n);
}