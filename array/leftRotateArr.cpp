#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArr(vector<int> arr)
{
    int n = arr.size();

    int temp = arr[0];

    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;

    return arr;
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> ans = rotateArr(arr);
    cout << "After rotate the value is : " << endl;

    for (int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
