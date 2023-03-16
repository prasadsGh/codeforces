/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
    ll n,k; cin>>n>>k;
    string s; cin>>s;
    if((k==(n/2)) && ((n%2)==0))
    {
        cout<<"NO\n";
        return;
    }
    ll count=0;
    ll i=0,j=n-1;
    while((i<j) && (count<k))
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
            count++;
        }
        else
        {
            cout<<"NO\n";
            return;
        }
    }
    if(count==k)
    cout<<"YES\n";
}

int main()
{
          ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
          ll t; cin>>t;
          while(t--)
          {
            prasad();
          }
          return 0;
}
