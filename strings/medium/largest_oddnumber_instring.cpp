#include<bits/stdc++.h>
using namespace std;

string largestNumber(string &s){
    int n= s.size();
    for(int i=n-1;i>=0;i--){
        if(s[i] % 2==1){
            return s.substr(0,i+1);
        }
    }
    return "";
}


int main(){
    string s="1";
    string s1=largestNumber(s);
    cout<<s1<<endl;

}