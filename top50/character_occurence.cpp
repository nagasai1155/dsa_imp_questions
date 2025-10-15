#include<bits/stdc++.h>
using namespace std;

void charoccrence(string & s){
    map<char,int>mpp;

    for(int i=0;i<s.length();i++){
        mpp[s[i]]++;
    }
    for(auto it:mpp){
        cout<<it.first<<":"<<it.second<<endl;
    }

}
//time complexity:o(nlogn);
//space :o(k) k->no.of disitnct elements in map;
int main(){

    string str= "nagasai balam";
    charoccrence(str);

}