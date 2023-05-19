/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void prasad()
{
    int n, m;
    cin >> n >> m;
    int v[n + 2][m + 2];

    memset(v, 0, sizeof(v));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> v[i][j];
        }
    }
    // for left direction
    int count = 0;
    for (ll i = 1; i <= n; i++)
    {
        int flag = 0;
        for (ll j = 1; j <= m; j++)
        {
            if (v[i][j] == 1)
                flag = 1;
            if (v[i][j] == 0 && flag)
                count++;
        }
    }
    // for right direction
    for (ll i = 1; i <= n; i++)
    {
        int flag = 0;
        for (ll j = m; j >= 1; j--)
        {
            if (v[i][j] == 1)
                flag = 1;
            if (v[i][j] == 0 && flag)
                count++;
        }
    }
    // for down direction

    for (ll j = 1; j <= m; j++)
    {
        int flag = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (v[i][j] == 1)
                flag = 1;
            if (v[i][j] == 0 && flag)
                count++;
        }
    }
    // for up direction

    for (ll j = m; j >= 1; j--)
    {
        int flag=0;
        for (ll i = n; i >= 1; i--)
        {
            if (v[i][j]==1) flag=1;
            if(v[i][j]==0 && flag) count++;
        }
    }
    cout<<count<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    while (t--)
    {
        prasad();
    }
    return 0;
}
