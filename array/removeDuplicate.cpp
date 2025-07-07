#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int removeDup(int arr[], int n)
{
    int i = 0;

    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j]; // place the unique element in the next position
        }
}
   return i + 1; 
}
int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int n = 7;
    int ans =  removeDup(arr, n); 
    cout<<"After removing duplicate elements is "<<endl; 
    for(int i =0; i<ans; i++){
         cout<<arr[i]<<" "; 
    }
  cout<<endl; 


    return 0;
}
