#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5};

   
    vector<pair<int, int>> v_p = {{1,2}, {2,3}, {3,4}};
    for(pair<int, int>&value: v_p){
       cout<<value.first<<" "<<value.second<<endl; 
    }
     for (auto &value : v)
    {
        cout << value << " ";
    }


    cout << endl;

    auto a =1;
     cout<<a<<endl; 


    return 0;
}
