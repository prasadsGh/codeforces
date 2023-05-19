/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
  int n; cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  map<int,int>mp;
  for(int i=n-1;i>=0;i--)
  {
    if(mp.find(v[i])!=mp.end())
    {
      cout<<i+1<<endl;
      return;
    }
    mp[v[i]]++;
  }
  cout<<0<<endl;

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
