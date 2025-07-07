#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d)
{                                
    d = d % n;

    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
}

int main()
{
    int arr[] = {1, 3, 4, 5, 6};
    int n = 5;
    int d = 4;
    cout << " Original array ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    leftRotate(arr, n, d);

    cout << "Array after " << d << " left rotations"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


