#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findMaxiConsecutive(vector<int> &nums)
{
    int maxi = 0;
    int cnt = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            cnt++;
            maxi = max(maxi, cnt);
        } 
        else
        {
            cnt = 0;
        }
    }
    return maxi;
}

int main()
{
    vector<int> a = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    int ans = findMaxiConsecutive(a);

    cout << "Maximum Consecutive number is " << ans << endl;

    return 0;
}
