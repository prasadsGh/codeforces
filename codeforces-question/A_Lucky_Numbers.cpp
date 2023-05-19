
#include <bits/stdc++.h>
using namespace std;
#define int long long
int f(int n)
{
    int mini=INT_MAX;
    int maxi=0;
    while(n)
    {
        int temp=n%10;
        mini=min(mini,temp);
        maxi=max(maxi,temp);
        n/=10;
    }
    return maxi-mini;

}
void mandar()
{
    int l,r; cin>>l>>r;
    
    int temp=(r-10);
    if(temp>l)
    {
        l=temp;
    }
    int ans=0;
    int temp1=0;

    for(int i=l;i<=r;i++)
    {
        int temp=f(i);
        if(temp>=temp1)
        {
            ans=i;
            temp1=temp;
        }
    }
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
            mandar();
          }
          return 0;
}
