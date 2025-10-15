#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//tc:o(n) sc:o(n)
string reverseWords(string &s){
     s +=' ';//add space to capture the last word
    stack<string> st;
    string ans ="";

    for(int i=0;i<s.size();i++){
        if(s[i] == ' '){
            if(!s.empty()){
                st.push(ans);
                ans="";
            }
        }else{
            ans +=s[i];
        }
    }
    //rebuild the string from the stack
    string str="";
    while(st.size()>1){
        str += st.top() + " ";
        st.pop();

    }
    str= str+ st.top();
    return str;
}

int main(){

    string s = "This is Nagasai word";
    cout<<"Before reversing words: "<<s<<endl;

  string  s1=  reverseWords(s);

  cout<<"After reversing words: "<<s1<<endl;
}