#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int OnceAppear(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int cnt = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] == num)
            {
                cnt++;
            }
            if (cnt == 1)
                return num;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4, 1, 2, 1, 2};
    int n = 5;

    int ans = OnceAppear(arr, n);
    cout << "Ans is " << ans << endl;

    return 0;
}
