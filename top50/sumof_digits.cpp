#include<bits/stdc++.h>
using namespace std;

// time: o(logn base 10)
int sumof(int n){
    int sum=0;
    while(n>0){
        sum +=n%10;
        n /=10;
    }
    return sum;
}

int main(){

    int num=1234;
   int ans= sumof(num);
   cout<<ans<<endl;
}