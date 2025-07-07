#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int>& a)
{

    int j = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            break;
        }
    }
    // no non zero numbers
    if (j == -1)
        return a;

    for (int i = j + 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }

    return a;
}

int main()
{
    vector<int> arr = {0, 1, 2, 3, 0, 3, 0, 5, 6, 0, 0, 8, 9};
    int n = arr.size(); 
    
    vector<int> ans = moveZeros(n , arr); 
     
     // print the result 
     for(int num : ans ) {
         cout<<num<<" "; 
     }
     cout<<endl;



    return 0;
}
