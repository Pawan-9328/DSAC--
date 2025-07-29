#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
   if (n == 0)
   {
      return 0;
   }

   return n + sum(n - 1);
}

int main()
{

   cout << "Sum of 5 is " << sum(6) << endl;

   return 0;
}
