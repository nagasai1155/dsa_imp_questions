#include<bits/stdc++.h>
using namespace std;
//brute tc:o(nlogn) sc:o(1)
void check_anagrams(string s1,string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    if(s1== s2){
        cout<<"strings are anagrams"<<endl;
    }else{
        cout<<"strings are not anagrams"<<endl;
    }
}
//optimal tc:o(n) space :o(1)
bool check_anagrams1(string s1,string s2){
    //using hasing
    vector<int> arr(26,0);
    for(int i=0;i<s1.size();i++){
        arr[s1[i]-'a']++;
    }
    for(int j=0;j<s2.size();j++){
        arr[s2[j]-'a']--;
    }

    for(int i=0;i<26;i++){
        if(arr[i] !=0){
           return false;
        }
    }
    return true;

}

int main(){

    string str1="slient";
    string str2="listen";
   bool ans= check_anagrams1(str1,str2);
   if(ans){
    cout<<"yes anagrams";
   }else{
    cout<<"not ";
   }
}