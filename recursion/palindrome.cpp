#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string &str, int i, int j){
    
    //base case 
    if(i>j) 
    return ; 


    if(str[i] != str[j]) {
         return false; 
    } else{
        checkPalindrome(str, i+1, j+1); 
    }

}

int main()
{   
       
    



return 0;
}
