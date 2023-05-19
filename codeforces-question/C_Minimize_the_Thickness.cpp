#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
    //using prefix sum we will try to compare the longest segment sum 
    //with the first segment sum(which is one of the prefix sum)
    int n; cin>>n;
    
    vector<int>v(n+1);
    v[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    vector<int>p(n+1);
    p[0]=0;
    for(int i=1;i<=n;i++)
    {
        p[i]=p[i-1]+v[i];
        // cout<<p[i]<<" ";
    }
    int ans=n;
    for(int i=1;i<=n;i++)
    {
        int maxi=0;
        int counter=0;
        int count=0;
        for(int j=1;j<=n;j++)
        {
            count++;
            if((p[j]-p[counter])==p[i])
            {
                maxi=max(maxi,count);
                counter=j;
                count=0;
            }
        }
        if(counter==n)
        {
            ans=min(ans,maxi);
        }
    }
    cout<<ans<<endl;
    return;
    
}
signed main()
{
    int t; cin>>t;
    while(t--)
    {
        prasad();
    }
    return 0;
}