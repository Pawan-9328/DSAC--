#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // int num = 5;

    // cout << num << endl;

    // int *p = &num;

    // address of operator - &

    // cout << "address of num is " << &num << endl;

    // cout << *p << endl;
    // cout << &num << endl;

    // int i = 3;
    // int *t = &i;

    // *t = *t + 1;
    // cout << *t << endl;
    // cout<<i<<endl;
    // cout << "before t " << t << endl;
    // t = t + 1;
    // cout << "after t " << t << endl;

    //- pointer in array

    // int arr[10] = {23, 710, 41};

    // cout << "Address of first memory block " << arr << endl;
    // cout << "Address of first memory block " << arr[0] << endl;

    // cout << &arr[0] << endl;
    // cout << *arr << endl;
    // cout << "4th " << *arr + 1 << endl;
    // cout << "5th " << *(arr + 1) << endl;
    // cout << "6th " << *(arr) + 1 << endl;
    // cout << "7th " << arr[2] << endl;



    int a[20] = {1,2,3,4,5};
    
    // cout<<"- > "<<&a[0]<<endl;
    
    // int *p = &a[0]; 

    // cout<<"- > "<<&p<<endl; 

//ERROR 
  //arr = arr+1; 
 
  int arr[10]; 


  // int *ptr = &arr[0];
  // cout<<ptr<<endl; 

  // ptr = ptr+1; 
  // cout<<ptr<<endl; 

  //char array 

  char ch[5] ="abcd"; 

  char *c = &ch[0]; 
  //prints entire string 
   cout<<&c<<endl; 
   cout<<*c<<endl; 
 
    

    return 0;
}
