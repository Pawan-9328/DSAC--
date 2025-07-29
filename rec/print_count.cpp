#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printCount(int n)
{
    if (n == 0)
        return;
    cout << n << endl;

    printCount(n - 1);
}

int main()
{
    printCount(6);
    return 0;
}
