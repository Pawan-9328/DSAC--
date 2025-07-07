#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{

  int i= 5; 
  int *p = &i; 
  int **p2 = &p; 

 cout<<endl<<endl<<" sab shi chl rh h "<<endl <<endl;
 
 cout<<"printing p" <<p<<endl;
 cout<<"printing p" <<&p<<endl;
 cout<<"printing p2" <<*p2<<endl;

 cout<<i<<endl;
 cout<<*p<<endl;
 cout<<**p2<<endl;





return 0;


}
