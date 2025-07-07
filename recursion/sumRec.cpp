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
    else
    {

        int remainingPart = getSum(arr + 1, size - 1);
        int sum = arr[0] + remainingPart;
        return sum;
    }
}

int main()
{

    int arr[] = {2, 3, 4, 5, 6, 7};
    int size = 6;

    int sum = getSum(arr, size);
    cout << "Sum of all number is " << sum << endl;

    return 0;
}
