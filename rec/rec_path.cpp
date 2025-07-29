#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reachHome(int src, int dest)
{
    cout<<"src "<<src<<" dest "<<dest<<endl; 
    if (src == dest)
    {
        cout << "Reached " << endl;
        return;
    }

    src++;

    reachHome(src, dest);
}

int main()
{
    int src = 1;
    int dest = 20;

    reachHome(src, dest);

    return 0;
}
