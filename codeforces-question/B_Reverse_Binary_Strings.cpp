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
    ll count=0;
    stack<char>s1,s2;
    for(ll i=0;i<n;i++)
    {
        if(s1.empty() or s1.top()!=s[i])
        {
            s1.push(s[i]);
        }
        else if(!s2.empty() && s2.top()!=s[i])
        {
            char temp=s2.top();
            s1.push(temp);
            s1.push(s[i]);
            s2.pop();
        }
        else
        {
            s2.push(s[i]);
            count++;
        }
    }
    cout<<count<<endl;
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
