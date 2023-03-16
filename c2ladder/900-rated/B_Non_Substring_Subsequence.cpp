/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void prasad()
{
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    map<char, ll> mp;
    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        a--;
        b--;
        int i = a - 1, j = b+1;
        int flag = 0, flag1 = 0;
        while (i >= 0)
        {
            if (s[a] == s[i])
            {
                flag = 1;
                break;
            }
            i--;
        }
        while(j<n)
        {
            if(s[b]==s[j])
            {
               flag1=1;
               break;
            }
            j++;
        }
        if(flag or flag1)
        {
            cout<<"YES\n";
            
        }
        else cout<<"NO\n";
        
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        prasad();
    }
    return 0;
}
