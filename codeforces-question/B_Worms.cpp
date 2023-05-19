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
    int m; cin>>m;
    vector<int>pre(n);
    pre[0]=v[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=(pre[i-1]+v[i]);
    }
    while(m--)
    {
        int x; cin>>x;
        int idx=lower_bound(pre.begin(),pre.end(),x)-pre.begin();
        cout<<idx+1<<endl;
    }
}

signed main()
{
          ios_base::sync_with_stdio(false);
             cin.tie(NULL); cout.tie(NULL);
          int t=1; 
          
          while(t--)
          {
            prasad();
          }
          return 0;
}
