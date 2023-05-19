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
    vector<int>pref(n);
    pref[0]=v[0];
    for(int i=1;i<n;i++)
    {
        pref[i]=(pref[i-1]+v[i]);
    }
    vector<int>pref1(n);
    vector<int>v1=v;
    sort(v1.begin(),v1.end());
    pref1[0]=v1[0];
    for(int i=1;i<n;i++)
    {
        pref1[i]=(pref1[i-1]+v1[i]);
    }
    int m; cin>>m;
    while(m--)
    {
        int t,l,r; cin>>t>>l>>r;
        if(t==1)
        {
            cout<<pref[r-1]-pref[l-1]+v[l-1]<<endl;
            
        }
        else 
        {
            cout<<pref1[r-1]-pref1[l-1]+v1[l-1]<<endl;
        }

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
