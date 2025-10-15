#include<bits/stdc++.h>
using namespace std;

string findPrefix(vector<string> &str){
    string prefix = str[0];
    for(int i=1;i<str.size();i++){
       
        while(str[i].find(prefix) !=0){
            prefix = prefix.substr(0,prefix.size()-1);
        }
        if(prefix.size() ==0) return "";
    }
    return prefix;

}

int main(){



    vector<string> strs={"flower","flow","flight"};
    string prefix = findPrefix(strs);
    cout<<prefix<<endl;
}