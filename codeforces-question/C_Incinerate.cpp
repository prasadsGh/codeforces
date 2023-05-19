/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
    int n,k; cin>>n>>k;
    vector<int>h(n);
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        // cout<<a[i];
    }
    vector<pair<int,int>>vp(n);
    for(int i=0;i<n;i++)
    {
        vp[i]={a[i],h[i]};
    }
    sort(vp.begin(),vp.end());
    // for(int i=0;i<n;i++)
    // {
    //     cout<<vp[i].first<<" ";
    // }
    // cout<<endl;
    //  for(int i=0;i<n;i++)
    // {
    //     cout<<vp[i].second<<" ";
    // }
    // cout<<endl;

    int temp=k;
    int temp1=*max_element(h.begin(),h.end());
    for(int i=0;i<n;)
    {
        if(temp>=vp[i].second)
        {
           i++;
           continue;
        }
    
        k-=vp[i].first;
        if(k<0)
        {
            cout<<"NO\n";
            return;
        }
        temp+=k;


    }
    if(k>0)
    {
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";



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
