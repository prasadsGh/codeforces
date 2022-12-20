// this code belongs to prasad patil
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
// this code belongs to prasad patil
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
// this code belongs to prasad patil
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
// this code belongs to prasad patil
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
void straight(ll n)
{
    cout << "0";
    for (int i = 1; i <= n; i++)
        cout << " " << i;
    // cout<<n;
}
void ulta(ll n)
{
    if (n >= 0)
    {
        cout <<" "<<n;
        for (int i = (n - 1); i >= 0; i--)
            cout << " " << i;
    }
}

void prasad()
{
    ll n;
    cin >> n;
    ll space = (n);
    ll temp1 = space;
    ll temp = n;
    int i = 0;

    while (i <= n)
    {
        // cout<<"  ";
        while (space--)
            cout << "  ";
        straight(i);
        ulta(i - 1);
        space = temp1;
        // while(space--) cout<<"  ";
        temp1--;
        space = temp1;
        i++;
        cout << endl;
    }
    i = (n - 1);
    space = 1;
    temp = 1;
    // temp=n;
    int j = 0;
    while (j < n)
    {

        // cout<<"  ";
        while (space--)
            cout << "  ";
        straight(i);
        ulta(i - 1);
        space = temp;
        //  while(space--) cout<<" ";
        temp++;
        space = temp;
        i--;
        j++;
        cout << endl;
    }
}
int main()
{
    prasad();
    return 0;
}