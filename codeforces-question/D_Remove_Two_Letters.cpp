/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
    int n; cin>>n;
    string s; 
    cin>>s;
    int count=1;
    for(int i=0;i+2<n;i++)
    {
        if(s[i]==s[i+2])
        {
            continue;
        }
        else count++;
    }
    // cout<<endl;
    cout<<count<<endl;
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
