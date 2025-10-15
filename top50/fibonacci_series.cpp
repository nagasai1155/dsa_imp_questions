#include<bits/stdc++.h>
using namespace std;

//brute force
int fibonacciSeries(int a){
    
    if(a==0) return 0;
    if(a==1) return 1;
    int x = fibonacciSeries(a-1);
    int y = fibonacciSeries(a-2);
    return x+y;
}

//optimal

int fibonacciSeries1(int num){
    if(num==0) return 0;
    if(num==1) return 1;

    int a =0;int b=1;
    int c;

    for(int i=2;i<=num;i++){
        int c = a + b;
        cout<<c<<" ";
        a =b;
        b=c;
    }
    return b;
}


int main(){
    int a =10;
  int ans=  fibonacciSeries1(a);
  cout<<"fibonacci series of "<<a<<" is:"<<ans<<endl;
}