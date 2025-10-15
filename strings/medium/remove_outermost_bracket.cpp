#include<bits/stdc++.h>
using namespace std;
//better appraoch
string removeBracket(string &s){

    stack<char> st;
    string ans;
    for(char c: s){
        if(c==' ') continue;

        if(c=='('){
            if(!st.empty()){
                ans.push_back(c);
            }
            st.push(c);
        }else{
            st.pop();
            if(!st.empty()) ans.push_back(c);
        }
    }
    return ans;
}

//otimal apporach
string removeBracket1(string &s){
    int cnt=0;
    string ans;

    for(char c: s){

       if(c=='('){
           if(cnt >0){
            ans.push_back(c);
           }
           cnt++;
       }else{
        cnt--;
        if(cnt>0){
            ans.push_back(c);
        }
       }
    }
    return ans;

}

int main(){

    string s="(()())(())";
    //output:()()()

    string ans1 =removeBracket1(s);
    cout<<"ans: "<<ans1<<endl;
}