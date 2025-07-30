#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int *arr, int size, int k)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == k)
    {
        return true;
    }

    bool remainingPart = linearSearch(arr + 1, size - 1, k);
    return remainingPart;
}

int main()
{
    int arr[] = {1, 4, 5, 67, 78, 100};
    int size = 6;
    int k = 101;

    bool ans = linearSearch(arr, size, k);
    if (ans == 1)
    {
        cout << "Element present " << endl;
    }
    else
    {
        cout << "Element can't be present " << endl;
    }
    return 0;
}
