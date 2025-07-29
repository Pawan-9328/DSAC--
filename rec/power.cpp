#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    return a * power(a, b - 1);
}

int main()
{
    int a, b;
    cout << "enter base: " << endl;
    cin >> a;
    cout << "Enter exponent : " << endl;
    cin >> b;

    cout << a << "raised to the power " << b << " is " << power(a, b) << endl;

    return 0;
}
