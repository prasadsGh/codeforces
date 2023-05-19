/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
bool fun(vector<int> &a, int x,int k,int n)
{
    int sum=0;
    for(int i=((n)/2);i<n;i++)
    {
        if(x-a[i]>=0)
        sum+=(x-a[i]);
    }
    if(sum<=k)
    {
        return true;
    }
    return false;

}
void prasad()
{
    // we will find the maximu number using binary search which should follow
    // summation ( i from ((n+1)/2) to n) {x-a[i]}<=k for 1 -based indexing 
    int n,k; cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    { 
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int low=0, high=2e9;
    
    while(low<high)
    {
        int mid=((low+high+1)/2);
        if(fun(a,mid,k,n))
        {
            low=mid;
        }
        else 
        {
            high =mid-1;
        }
    }
    cout<<low<<endl;

}

signed main()
{
          ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
          int t=1; 
        //   cin>>t; 
          while(t--)
          {
            prasad();
          }
          return 0;
}
