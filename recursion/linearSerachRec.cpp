#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int *arr, int size, int k)
{

    if (size == 0)
    {
        return false;
    }

    if (size == k)
    {
        return true;
    }

    int remainingPart = linearSearch(arr + 1, size - 1, k);
    return remainingPart;
}

int main()
{

    int arr[] = {2, 3, 5, 6, 7, 8, 9};
    int size = 4;
    int k = 6;

    bool ans = linearSearch(arr, size, k);
    if (ans)
    {
        cout << "Key is present " << endl;
    }
    else
    {
        cout << "key is not present " << endl;
    }

    return 0;
}
