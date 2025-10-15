#include<bits/stdc++.h>
using namespace std;

//tc:o(n+m) and sc:o(n)
vector<int> findCommonElements(vector<int> &arr1, vector<int> & arr2){

    unordered_map<int, int> freq;
    vector<int> store;

    // Count elements of arr1
    for (int num : arr1) {
        freq[num]++;
    }

    // Check common elements in arr2
    for (int num : arr2) {
        if (freq[num] > 0) {
          
            store.push_back(num);
             freq[num]--;  // reduce count to avoid duplicates
        }
    }

    return store;
}


//brute force tc:o(n*m) sc:o(1);
// void findCommoneThings(vector<int> &arr1, vector<int> & arr2)
// {
  

//     for(int i=0;i<arr1.size();i++){
//         for(int j=0;j<arr2.size();j++){
//             if(arr1[i]== arr2[j]){
//                 cout<<arr1[i]<<endl;
//                 break;
//             }
//         }
//     }

// }


int main(){

    vector<int> arr1={1,3,2,6,8};
    vector<int> arr2 ={2,3,6,8,9};

vector<int> ans=    findCommonElements(arr1,arr2);
for(int it:ans){
    cout<<it<<" ";
}

 
}