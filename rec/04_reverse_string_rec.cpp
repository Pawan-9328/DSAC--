#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void reverseStr(string str, int i, int j)
// {

//     if (i > j)
//     {
//         return;
//     }
//     swap(str[i], str[j]);
//     i++;
//     j--;

//     return reverseStr(str, i, j);
// }

////---------without extra var like j 



void reverseStr(string &str, int i)
{
    int n = str.length()-1; 

    if (i > n-i-1)
    {
        return;
    }
    swap(str[i], str[n-i-1]);
    i++;
    

    return reverseStr(str, i+1);
}


int main()
{
    string name = "Keshav";

    reverseStr(name, 0);
    cout << name << endl;

    return 0;
}
