#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void printArr(int *arr, int s, int e)
// {
//     for (int i = s; i <=e; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

bool binarySearch(int *arr, int s, int e, int k)
{
    // cout << endl;
    // printArr(arr, s, e);

    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;
    //cout << "value of arr mid is " << arr[mid] << endl;

    if (arr[mid] == k)
    {
        return true;
    }

    if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, e, k);
    }
    else
    {
        return binarySearch(arr, s,mid - 1, k);
    }
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int key = 8;
    bool ans = binarySearch(arr, 0, 5, key);

    if (ans == 1)
    {
        cout << "Element found " << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
