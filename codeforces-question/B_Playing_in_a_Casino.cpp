/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
    int n,m; cin>>n>>m;
    vector<int>v[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x; cin>>x;
            v[i].push_back(x);
        }
    }
    int sum=0;
    for(int j=0;j<m;j++)
    {
        vector<int>v1(n);
        for(int i=0;i<n;i++)
        {
            v1[i]=v[i][j];
        }
        sort(v1.begin(),v1.end());  
        vector<int>pref(n);
        pref[0]=v1[0];
        for(int i=1;i<n;i++)
        {
            pref[i]=(pref[i-1]+v1[i]);
        }
        for(int i=1;i<n;i++)
        {
            sum+=((i*v1[i])-(pref[i-1]));
        }

    }
    cout<<sum<<endl;
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
