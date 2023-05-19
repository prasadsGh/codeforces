
/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
    ll n; cin>>n;
    string s; cin>>s;
    bool used_one=false;
    bool used_two=false;
    bool breaked=false;
    for(int i=0;i<(n/2);i++)
    {
        if(s[i]!=s[n-i-1])
        {
            if(used_one && breaked)
            {
                cout<<"No\n";
                return;
            }
            else used_one=true;
        }
        else
        {
            if(used_one) breaked=true;
        }
    }
    cout<<"Yes\n";
}

int main()
{
          ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
          ll t=1; cin>>t;
          while(t--)
          {
            prasad();
          }
          return 0;
}
