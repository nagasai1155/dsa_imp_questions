#include<bits/stdc++.h>
using namespace std;

//time o(sqrt(n)); space o(1);  optimal
bool isPrime(int  num){

    if(num<=1) return false;

    for(int i=2;i<sqrt(num);i++){
        if(num %i ==0) return false;
    }
return true;
}
//better
bool isPrime1(int num){

    if(num <=1) return false;
    
    for(int i=2;i<num;i++){
        if(num % i==0) return false;
    }
    return true;
}



int main(){
    int num=10;
 bool ans=   isPrime1(num);
 if(ans) cout<<"it is prime"<<endl;
 else{
    cout<<"it is not prime"<<endl;
 }

}