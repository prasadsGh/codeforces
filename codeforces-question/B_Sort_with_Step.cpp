/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

void prasad()
{
    int n, k; cin >> n >> k;
    vector<int>v(n);
    int count = 0;
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        if (((v[i] - i - 1) % k) == 0)
        {
            continue;
        }
        else count++;
    }
    if (count == 2) cout << 1 << endl;
    else if (count == 0) cout << 0 << endl;
    else cout << -1 << endl;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);


// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("error.txt", "w", stderr);
//     freopen("output.txt", "w", stdout);
// #endif

    int t = 1;
    cin >> t;
    while (t--)
    {
        prasad();
    }
    return 0;
}

