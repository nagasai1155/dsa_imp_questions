#include<bits/stdc++.h>
using namespace std;

//better solution tc:o(n) sc:o(n)
int find_missing_number(vector<int> & arr){

    int n = arr.size();
    vector<int> hash(n+1,0);

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    for(int i=1;i<n;i++){
        if(hash[i] == 0){
            return i;
        }
    }
return -1;
}

//optimal solution =>sum of n natural numbers n(n+1)/2
//tc:0(n) sc:o(1);

int find_missing_number1(vector<int> & arr){

    int n = arr.size();
    int sum = (n+1)*(n+2)/2;
    int actualsum=0;

    for(int i=0;i<n;i++){
         
        actualsum +=arr[i];
    }
    int missing=sum- actualsum;
    return missing;
}



int main(){
    vector<int> arr={1,2,4};
   int ans= find_missing_number1(arr);
   cout<<"missing number: "<<ans<<endl;
}