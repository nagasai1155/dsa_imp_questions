#include<bits/stdc++.h>
using namespace std;

//tc:o(n) sc:o(n)
string reverseWords(string & s){
    s +=' ';
    stack<string> st;
    int n = s.length();
    string ans="";
    for(int i=0;i<n;i++){
        if(s[i] == ' '){
            st.push(ans);
            ans =" ";

        }else{
            ans +=s[i];
        }
    }

    string result="";
    while(st.size()>1){
          
        result +=st.top() + " ";
        st.pop();
       
    }
    result +=st.top();
   

    return result;


}

int main(){

    string str= "c++ is an programming language";
  string ans=  reverseWords(str);
  cout<<ans<<endl;
}