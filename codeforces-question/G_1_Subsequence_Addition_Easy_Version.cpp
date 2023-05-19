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
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int>p(n);
    sort(v.begin(),v.end());
    p[0]=v[0];
    for(int i=1;i<n;i++)
    {
        p[i]=p[i-1]+v[i];
    }
    if(p[0]!=1)
    {
        cout<<"NO\n";
        return;
    }
    for(int i=1;i<n;i++)
    {
        if(p[i-1]<v[i])
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;
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
