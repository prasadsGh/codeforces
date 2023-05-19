/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
    int n; cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    if(n&1)
    {
        cout<<-1<<endl;
        return;
    }
    // if(n==2)
    // {
    //     cout<<2<<" "<<1<<endl;
    //     return;
    // }
    vector<int>per;

    for(int i=0;i<n;i++)
    {
        if(i&1)
        {
            // cout<<((i)%n)+1<<" ";
            // cout<<i<<" ";
            per.push_back((i));
        }
        else
        {
            // cout<<((n-i)%n)+1<<" ";
            // cout<<n-i<<" ";
            per.push_back(((n-i)));
        }
    }

     for(int i=0;i<n;i++)
    {
        cout<<(per[i])<<" ";
    }
    cout<<endl;
   
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
