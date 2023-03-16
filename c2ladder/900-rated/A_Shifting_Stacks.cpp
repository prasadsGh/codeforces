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
    vector<ll> v(n);
    ll need = 0;
    ll sum = 0;
    // 0 1 2 3 4 ...
    for (ll i = 0; i < n; ++i)
    {

        cin >> v[i];
    }
    for (ll i = 0; i < n; ++i)
    {

        need += i;
        sum += v[i];
        if (sum < need)
        {
            cout << "NO" << endl;
            return;
        }
        // cout<<need<<" "<<sum<<endl;
    }

    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        prasad();
    }
    return 0;
}
