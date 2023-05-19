/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
    int n; cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    
    for(int i=0;i+1<n;i++)
    {
        if((a[i]>b[n-1] && b[i]>b[n-1]))
        {
            cout<<"No\n";
            
            return;
        }
        if((b[i]>a[n-1]) && (a[i]>a[n-1]))
        {
            cout<<"No\n";
         
            return;
        }
        if((a[i]>a[n-1]) && (a[i]>b[n-1]))
        {
            cout<<"No\n";
            return;
        }
        if((b[i]>b[n-1]) && b[i]>a[n-1])
        {
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
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
