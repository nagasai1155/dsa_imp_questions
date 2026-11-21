#include<bits/stdc++.h>
using namespace std;

void revWords(string str){
    int n = str.length();
    stack<string> st;
    string ans="";
    for(int i=0;i<n;i++){
        if(str[i]==' '){
            
        st.push(ans);
        ans="";
        }else{
            ans +=str[i];
        }
    }
    st.push(ans);
    string res="";
    while(!st.empty()){
        res +=st.top()+" ";
        st.pop();
    }
    
    cout<<"final reversed string : "<<res<<endl;
}

int main(){
    string str="nagasai balam from hyd";
    revWords(str);
}