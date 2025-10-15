#include<bits/stdc++.h>
using namespace std;

char find_nonrep(string &s){
    int n= s.size();

    unordered_map<char,int> freq;

    for(char c:s){
        freq[c]++;
    }

    for(char c:s){
        if(freq[c]==1){
            return c;
        }
    }
    
    return '\0';
}

int main(){
    string s="nagasi";
    char c=find_nonrep(s);
    cout<<c<<endl;
}