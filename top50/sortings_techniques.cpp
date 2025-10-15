#include<bits/stdc++.h>
using namespace std;


//bubble sorting on dupllicate array
void bubbleSort(vector<int> & arr){
    
    int n = arr.size();

    for(int i=0;i<n-1;i++){

        for(int j=0;j<n-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
    for(auto it:arr){
        cout<<it<<" ";
    }
}

void selectionSort(vector<int> & arr){

    int n = arr.size();
    for(int i=0;i<n-1;i++){
        int min=i;

        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[min]){
               min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
}

int main(){
    
    vector<int> arr={3,6,1,8,9,4,4};
    selectionSort(arr);
}