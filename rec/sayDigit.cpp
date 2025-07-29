
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void digitPrint(int n, string arr[])
{
    if (n == 0)
    {
        return;
    }

    int digit = n % 10;
    n = n / 10;

    // recursive call
    digitPrint(n, arr);
    cout << arr[digit] << " ";
}

int main()
{
    string arr[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cout << "Enter the Digit " << endl
         << endl;
    cin >> n;

    digitPrint(n, arr);
    cout << endl
         << endl;
    return 0;
}
