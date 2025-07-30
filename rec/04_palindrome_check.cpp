#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// bool checkPalindrome(string &str, int i, int j)
// {
//     if (i > j)
//     {
//         return true;
//     }
//     if (str[i] != str[j])
//     {
//         return false;
//     }
//     return checkPalindrome(str, i + 1, j - 1);
// }

//........ without extra var 

bool checkPalindrome(string &str, int i)
{
    int n = str.length(); 

    if (i >= n-i-1)
    {
        return true;
    }
    if (str[i] != str[n-i-1])
    {
        return false;
    }
    return checkPalindrome(str, i + 1);
}

int main()
{
    string str = "madam";

    bool ans = checkPalindrome(str, 0);

    if (ans == 1)
    {
        cout << "Palindrome " << endl;
    }
    else
    {
        cout << "Not palindrome " << endl;
    }
    return 0;
}
