#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size)
{

    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }

    bool ans = isSorted(arr + 1, size - 1);
    return ans;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12};
    int size = 6;

    bool ans = isSorted(arr, size);

    if (ans == 1)
    {
        cout << "Is sorted " << endl;
    }
    else
    {
        cout << "Not sorted " << endl;
    }

    return 0;
}
