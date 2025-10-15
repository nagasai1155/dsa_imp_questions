#include<bits/stdc++.h>
using namespace std;

string reverseString(string &str){

    reverse(str.begin(),str.end());

    return str;
}

string reverseString1(string & str){

    int n = str.size();
    string rev="";
    for(int i=n-1;i>=0;i--){
         rev +=str[i];
    }
    return rev;
}


string swap1(string &s ,int left,int right){
    while(left < right){
        char temp = s[left];
        s[left]=s[right];
        s[right]=temp;
        left++;
        right--;
    }
    return s;
}
string reverseString2(string & str){
    //two pointers tc=o(n) space o(1);
    int left =0;
    int right = str.size()-1;
   return  swap1(str,left,right);
    
}
int main(){
    
    string s="naga";
    string ans=reverseString2(s);
    cout<<ans<<endl;
}