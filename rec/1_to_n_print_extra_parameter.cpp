#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int i, int n)
{
    if (i > n)
        return;

    cout << i << endl;

    return print(i + 1, n);
}

int main()
{  int n= 7;
   // int i = 0;
    print(1,7);
    return 0;
}
