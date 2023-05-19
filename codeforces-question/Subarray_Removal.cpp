/* 
   author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
//pbds header file
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
/*
   functionalities that can be used  with pdbs 
   --> find_by_order - print element at ith index -- returns iterator 
   --> order_of_key - print no of elements less than x (pbds a; a.order_of_key(x))
   --> lower bound --> similar to set - a.lower_bound(x)
   --> a.erase(x) -- values that is not present in ordered set then nothing will be affected

   --> declaration of pbds --> pdbs a;

   --> you can also change less<int> to greater<int> or less_equal<int> to get respective result
*/
#define int long long 
void prasad()
{
}

signed main()
{
          ios_base::sync_with_stdio(false);
            cin.tie(NULL); cout.tie(NULL);
          int t=1; 
          cin>>t; 
          while(t--)
          {
            prasad();
          }
          return 0;
}
