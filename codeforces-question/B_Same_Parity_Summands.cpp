/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
    int n,k; cin>>n>>k;
    
        int temp=(n-(k-1));
        if(temp&1 && temp>0)
        {
            int k1=(k-1);
            cout<<"YES\n";
            while(k1--)
            {
                cout<<1<<" ";
            }
            cout<<temp<<endl;
            return;
        }
        temp=(n-(2*(k-1)));
        if(temp>0 && !(temp&1))
        {
            int k1=(k-1);
            cout<<"YES\n";
            while(k1--)
            {
                cout<<2<<" ";
            }
            cout<<temp<<endl;
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
