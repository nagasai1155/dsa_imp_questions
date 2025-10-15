#include<bits/stdc++.h>
using namespace std;

int longestsubstring(string &s){
    int n = s.size();
    vector<int> lastseen(255,-1);
    int i=0;
    int maxlen=0;
    for(int j=0;j<n;j++){
        if(lastseen[s[j]] >=i){
            i=lastseen[s[j]]+1;
        }
        lastseen[s[j]]=j;
        maxlen= max(maxlen,j-i+1);
    }
    return maxlen;
}

int main(){

    string s;
    cin>>s;
    longestsubstring(s);
}