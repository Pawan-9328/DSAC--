#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reachHome(int src, int dest)
{

    // base case
    cout << " source " << src << " destination " << endl;
    if (src == dest)
    {
        cout << "reached " << endl;
        return;
    }

    // processing - ek step aage lo
     src++;
    // recursive call
    reachHome(src, dest);
}

int main()
{
    int dest = 10;
    int src = 1;

    cout << endl;

    reachHome(src, dest);

    return 0;
}
