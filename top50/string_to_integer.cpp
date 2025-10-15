#include<bits/stdc++.h>
using namespace std;

int stsoi(string & s){
   int x= stoi(s);
   return x;
}
//without using prebuild functions
int string_integer(string & s){
    int num=0;
    for(int i=0;i<s.length();i++){
        num = num *10 +(s[i]-'0');
    }
    return num;
}
int main(){
    string s="1234";
   int ans= string_integer(s);
   cout<<ans<<endl;
   cout<<typeid(ans).name();
   
}