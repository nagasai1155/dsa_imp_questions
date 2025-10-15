#include<bits/stdc++.h>
using namespace std;

string reverseString(string &str){
    str +=' ';
    int n =str.length();
    stack<string> st;
    string ans="";
    for(int i=0;i<n;i++){
        if(str[i] == ' '){
           if(!ans.empty()){
             st.push(ans);
            ans="";
           }

        }else{
            ans +=str[i];
        }
    }
    string fin="";
   while(st.size() > 1){
    fin +=st.top()+" ";
    st.pop();
   }
   fin +=' ';
   return fin;

}

int main(){
    string str="Hello this is nagasai";
 string ans=   reverseString(str);
 cout<<ans<<" "<<endl;
}