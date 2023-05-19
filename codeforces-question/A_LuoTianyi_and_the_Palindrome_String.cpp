/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
    string s; cin>>s;
    int n=s.length();
    for(int i=0;i+1<n;i++)
    {
        if(s[i]!=s[i+1])
        {
            cout<<n-1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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
