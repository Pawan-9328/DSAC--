#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int climbStair(int nStairs){
      // base case 
      if(nStairs<0) {
        return 0; 
      }
      if(nStairs == 0){
         return 1; 
      }
      //R.C

      int ans = climbStair(nStairs-1) + climbStair(nStairs-2); 
       return ans; 
}

int main()
{ 
 int n = 5;
 cout<<"Total stairs is "<<climbStair(5)<<endl; ;   
return 0;
}
