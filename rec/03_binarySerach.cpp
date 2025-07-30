#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k)
{

    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;

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
        return binarySearch(arr, s, e = mid - 1, k);
    }
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int key = 18;
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
