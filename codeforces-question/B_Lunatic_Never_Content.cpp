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
    vector<int>v1;
    int i=0, j=n-1;
    while(i<j)
    {
        v1.push_back(abs(v[i]-v[j]));
        i++;
        j--;
    }
    if(v1.size()==0) 
    {
        cout<<0<<endl;
        return;
    }
    int g=v1[0];
    for(int i=0;i<v1.size();i++)
    {
        g=__gcd(g,v1[i]);
    }
    cout<<g<<endl;
    
    
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
