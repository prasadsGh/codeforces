/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
/*
    KADANE's algorithm- this algorithm is used to 
    find largest sum in subarray of the array in O(n)

    take a variable sum=0;
    take a for loop and start iterating through it 
    add the element of array to variable sum (sum+=v[i])
    keep track of maximum sum (ans=max(ans,sum));
    if sum<0 then define sum=0

    return ans;

     -3 2 5 3 -3 9 2 1 -4 6 
     1) sum= -3,  ans=-3 --> *sum=0* because sum<0
     2) sum= 2 , ans=2 --> sum=2 
     3) sum=7, ans= 7 --> sum=7;
     4) sum=10 , ans=10 --> sum=10;
     5)sum= 7 , ans=10  -->(ans=max(ans,sum)--> ans=max(10,7)) , as sum=7 no need to make it 0
     6) sum =16, ans=16 --> sum=16
      and so on 
*/
signed main()
{
         int n; cin>>n;
         vector<int>v(n);
         int ans=INT_MIN;
         for(int i=0;i<n;i++)
         {
            sum+=v[i];
            ans=max(ans,sum);
            if(sum<0) sum=0;
         }
          return 0;
}
