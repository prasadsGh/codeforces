/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
    int n; cin>>n;
    string s; cin>>s;
    set<char>a(s.begin(),s.end());
    int count=0,flag=0,flag1=0;
    for(auto i:a)
    {
        flag=0, flag1=0;
        for(int j=0;j<n;j++)
        {
            if(s[j]==i)
            {
                if(j&1) flag1=1;
                else flag=1;
            }
        }
        if(flag && flag1) count++;
    }
   
    if(count>0)
    {
        cout<<"NO\n";
        return;
    }
    if(n==2)
    {
        if(s[0]==s[1])
        {
            cout<<"NO\n";
            return;
        }
        cout<<"YES\n";
        return;
    }
    cout<<"YES\n";
    return;
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
