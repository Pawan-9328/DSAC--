#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{

    // base case

    if (n == 0)
        return 1;
    return n * factorial(n - 1);

    // int chotti = factorial(n - 1);
    // int baddi = n * chotti;
    // return baddi;
}

int main()
{
    int n;
    cin >> n;
    int ans = factorial(n);

    cout << ans << endl;

    return 0;
}
