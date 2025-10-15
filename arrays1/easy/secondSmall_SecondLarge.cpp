// find second large and second smallest
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// brute for second small if array doesn' have duplicates

// int secondSmallest(int arr[],int n){

//     sort(arr,arr+n);
//     int secondSmall = arr[1];
//     int secondLarge = arr[n-2];
//     cout<<secondSmall<<"small"<<endl;
//     cout<<secondLarge<<"large";

// }

// better
int secondLar(int arr[], int n)
{

    int maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    int sl = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > sl && maxi != arr[i])
        {
            sl = arr[i];
        }
    }
    return sl;
}

int secondSmallest(int arr[], int n)
{

    int small = arr[0];

    int ss = INT_MAX;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] <small){
            ss = small;
            small = arr[i];
        }
            else if (arr[i] < ss && arr[i] != small)
            {
                ss = arr[i];
            }
    }
    return ss;
}

int main()
{

    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int res = secondSmallest(arr, n);
    cout << "second smallest: " << res << endl;
}