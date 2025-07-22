#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int Findsquare(int n)
{
    int s = 0, e = n - 1;
    int target = n;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (mid * mid == target)
        {
            return mid;
        }
        else if (mid * mid > target)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter the number " << endl;
    cin >> n;

    int ans = Findsquare(n);

    cout << "Ans is " << ans << endl;

    int precision;
    cout << "enter the number of floating digits in precision" << endl;
    cin >> precision;

    double step = 0.1;
    double finalAns = ans;

    for (int i = 0; i < precision; i++)
    {

        for (double j = finalAns; j * j <= n; j = j + step)
        {
            finalAns = j;
        }
        step = step / 10;
    }
    cout << "final ans is " << finalAns << endl;

    return 0;
}
