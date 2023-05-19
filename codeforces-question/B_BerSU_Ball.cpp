/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
    int n; cin>>n;
    vector<int>b(n);
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int m; cin>>m;
    vector<int>g(m);
    for(int i=0;i<m;i++)
    {
        cin>>g[i];
    }
    int count=0;
    sort(b.begin(),b.end());
    sort(g.begin(),g.end());
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(abs(b[i]-g[j])<=1)
            {
                g[j]=10000;
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
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
