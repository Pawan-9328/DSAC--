#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> &v)
{
    cout << "size: " << v.size() << endl;

    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    v.push_back(2);
    cout << endl;
}

int main()
{
    vector<int> v;

    v.push_back(4);
    v.push_back(7);
    v.pop_back();

    vector<int> &v1 = v;
    v1.push_back(8);
    printArr(v);
    printArr(v1);

    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x); // 0(1)
    // }
    // printArr(v);

    return 0;
}
