/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
    int n,q; cin>>n>>q;
    vector<int>v(n),p(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    p[0]=v[0];
    // cout<<p[0]<<" ";
    for(int i=1;i<n;i++)
    {
        p[i]=p[i-1]+v[i];
        // cout<<p[i]<<" ";
    }
    // cout<<endl;
    while(q--)
    {
        int l,r,k; cin>>l>>r>>k;
        int temp=0;
        if(l-2>=0)
         temp=p[r-1]-p[l-2];
        else temp=p[r-1];
        // cout<<l-1<<" "<<r-1<<endl;
        // cout<<temp<<endl;
        int temp1=sum-temp;
        temp1+=((r-l+1)*k);
        // cout<<r-l+1<<endl;
        if(temp1&1)
        {
            cout<<"YES\n";
        }
        else 
            cout<<"NO\n";
    }
    

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
