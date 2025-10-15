#include<bits/stdc++.h>
using namespace std;

void counts(string & str){
    int n = str.length();
    int vow=0;
    int cons=0;
    for(int i=0;i<n;i++){
        str[i] = tolower(str[i]);
        if(str[i] >='a' && str[i]<='z'){
            if(str[i]=='a'|| str[i]=='e' || str[i] =='i'|| str[i] =='o' || str[i]=='u'){
                vow++;
            }else{
                cons++;
            }
        }
    }
    cout<<"vowels: "<<vow<<endl;
    cout<<"consonants: "<<cons<<endl;
}


int main(){
    string str="Automation World";
    counts(str);
}