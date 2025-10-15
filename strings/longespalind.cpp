#include<bits/stdc++.h>
using namespace std;

bool isPlaindrom(string s ,int i, int j){
    while(i<j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
}

string longestpalindrom(string &s){
    if(s.length()== 0) return s;
    int start=0;
    int maxlen=0;
    for(int i=0;i<s.length();i++){
        for(int j =i;j<s.length();j++){
            if(isPlaindrom(s,i,j)){
                start =i;
                maxlen= j-i+1;
            }
        }
    }
    return s.substr(start,maxlen);
}

int main(){
    string s;
    cin>>s;
    longestpalindrom(s);
}