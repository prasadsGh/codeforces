/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void prasad()
{
    ll n;
    cin >> n;
    vector<vector<int>> v(n);
    for(ll i=0;i<n;i++)
    {
        v[i].resize(n,0);
    }

    for(ll i=0;i<n;i++)
    {
        v[i][i]=1;
        v[i][n-i-1]=1;
    }
    if(n%2)
    {
         v[n / 2 - 1][n / 2] = 1;
         v[n / 2][n / 2 + 1] = 1;
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
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
