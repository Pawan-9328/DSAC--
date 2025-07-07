#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int ApplyOnce(vector<int> &a)
{
    int n = a.size();

    int xorr = 0;

    for (int i = 0; i < n; i++)
    {
        xorr = xorr ^ a[i];
    }
    return xorr;
}

int main()
{
    vector<int> b = {1, 1, 2, 3, 3, 8, 8};
    int ans = ApplyOnce(b);
    cout << "Once appears number is " << ans << endl;
    return 0;
}
