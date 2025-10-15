#include<bits/stdc++.h>
using namespace std;

int lengthof(string & s){

    int length=0;
    for(char c:s){
        length++;
    }
    return length;
}

int main(){

    string s ="nagasai sai";
   int ans= lengthof(s);
   cout<<ans<<" ";
}