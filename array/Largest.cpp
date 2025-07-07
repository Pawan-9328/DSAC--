#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int larVal(int arr[], int n)
{
    int largestValue = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largestValue)
        {
            largestValue = arr[i];
        }
    }
     return largestValue; 
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    int n = 7;
    cout << " Largest Value in the array " << larVal(arr, n)<<endl;
    return 0;
}
