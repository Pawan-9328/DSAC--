#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int checkMissingEle(vector<int> &arr, int n)
{

    for (int i = 1; i <= n; i++)
    {

        int flag = 0;
        for (int j = 0; j < n - 1; j++)
        {

            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            return i;
    }
    return -1;
}

int main()
{
    vector<int> brr = {1, 2, 4, 5};
    int n = 5;
    int ans = checkMissingEle(brr, n);
    cout << " Missing element is " << ans << endl;

    return 0;
}
