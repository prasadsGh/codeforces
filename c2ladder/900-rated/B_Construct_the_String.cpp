/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
    ll n,a,b; cin>>n>>a>>b;
    vector<char>v;
    for(ll i=0;i<b;i++)
    {
        v.push_back(char('a'+i));
    }
    while(n>0)
    {
        for(ll i=0;i<v.size() && n;i++)
        {
            cout<<v[i];
            n--;
        }
    }
    cout<<endl;

}

int main()
{
          ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
          ll t=1; 
          cin>>t; 
          while(t--)
          {
            prasad();
          }
          return 0;
}
