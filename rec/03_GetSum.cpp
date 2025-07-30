#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getSum(int *arr, int size)
{

    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }

    int remainingPart = getSum(arr + 1, size - 1);
    int sum = arr[0] + remainingPart;
    return sum;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int size = 5;

    cout << " Sum is " << getSum(arr, size) << endl;

    return 0;
}
