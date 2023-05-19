/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
bool valid(int n, int d)
{
    while(n)
    {
        if((n%10)==d)  return true;
        n/=10;
    }
    return false;
}
void prasad()
{
    int q,d; cin>>q>>d;
    vector<int>v(q);
    for(int i=0;i<q;i++)
    {
        cin>>v[i];
        int flag=0;
        while(v[i]>0)
        {
            if(valid(v[i],d))
            {
                cout<<"YES\n";
                flag=1;
                break;
            }
            v[i]-=d;
        }
        if(flag==0)
        {
            cout<<"NO\n";
        }
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
