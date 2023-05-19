/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
  int n,m; cin>>n>>m;
    int n1= n*m;
    vector<int>v(n1);
    for(int i=0;i<n1;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int maxi=max(n,m);
    int mini=min(n,m);
    int a1= (mini*(maxi-1))*(v[n1-1]-v[0]);
    a1+= (mini-1)*(v[n1-2]-v[0]);
    int a2=(mini*(maxi-1))*(v[n1-1]-v[0]);
    a2+=((mini-1)*(v[n1-1]-v[1]));
    int ans=max(a1,a2);
    cout<<ans<<endl;
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
