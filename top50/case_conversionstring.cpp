#include<bits/stdc++.h>
using namespace std;

void casecon(string &s){
    for(int i=0;i<s.size();i++){
       if(s[i] >='a' && s[i]<='z'){
        s[i] -=32;
       }
    }
    cout<<s<<endl;
}
void casecon1(string & s){
//use toupper();
int n = s.size();
for(int i=0;i<n;i++){
    if(s[i]>='a' || s[i]<='z'){
        s[i]=toupper(s[i]);
    }

}
cout<<s<<endl;
}

int main(){
    string s = "nagabalam";
    casecon1(s);
}