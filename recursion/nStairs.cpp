#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//can't solve this question without dp 

int countStair(int stair)
{

    if (stair < 0)
        return 0;

    if (stair == 0)
        return 1;

    // RC

    return countStair(stair - 1) + countStair(stair - 2);
}

int main()
{    
     

 
     
    return 0;
}
