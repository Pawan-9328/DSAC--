#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int target)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int element = arr[mid];

        if (element == target)
        {
            return mid;
        }
        else if (target < element)
        {
            // search in left
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{

    int arr[] = {2, 4, 6, 8, 10, 12};
    int size = 6;
    int target = 10;
    int ans = binarySearch(arr, size, target);

    if (ans == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found " << ans << endl;
    }

    return 0;
}
