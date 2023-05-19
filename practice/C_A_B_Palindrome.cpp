/*
   author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
// pbds header file
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
/*
   functionalities that can be used  with pdbs --> it has similar functions as set
   --> find_by_order - print element at ith index -- returns iterator
   --> order_of_key - print no of elements less than x (pbds a; a.order_of_key(x))
   --> lower bound --> similar to set - a.lower_bound(x)
   --> a.erase(x) -- values that is not present in ordered set then nothing will be affected

   --> declaration of pbds --> pdbs a;

   --> you can also change less<int> to greater<int> or less_equal<int> to get respective result
*/
#define ll long long
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

void prasad()
{
    ll a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    ll n = a + b;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            a--;
        else if (s[i] == '1')
            b--;
    }
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            if (s[i] != '?' && s[j] != '?')
            {
                cout << -1 << endl;
                return;
            }
            if (s[i] == '?')
            {
                s[i] = s[j];
                if (s[j] == '0')
                    a--;
                else
                    b--;
                i++;
                j--;
            }
            else if (s[j] == '?')
            {
                s[j] = s[i];
                if (s[i] == '0')
                    a--;
                else
                    b--;
                i++;
                j--;
            }
        }
        else
        {
            i++;
            j--;
        }
    }
    i = 0, j = n - 1;
    while (i < j)
    {
        if (s[i] == s[j] && s[i] == '?')
        {
            if (a >= 2)
            {
                s[i] = '0';
                s[j] = '0';
                a -= 2;
                i++;
                j--;
            }
            else if (b >= 2)
            {
                s[i] = '1';
                s[j] = '1';
                i++;
                j--;
                b -= 2;
            }
            else
            {
                i++;
                j--;
            }
        }
        else
        {
            i++;
            j--;
        }
    }
    if (n & 1)
    {
        if (a > 0)
        {
            if (s[(n / 2)] == '?')
            {
                s[((n) / 2)] = '0';
                a--;
            }
        }
        else if (b > 0)
        {
            if (s[(n / 2)] == '?')
            {
                s[((n) / 2)] = '1';
                b--;
            }
        }
    }

    for (int i = 0; i < n; i++)

    {
        if (s[i] == '?')
        {
            cout << -1 << endl;
            return;
        }
    }
    if (a > 0 or b > 0)
    {
        cout << -1 << endl;
        return;
    }
    cout << s << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        prasad();
    }
    return 0;
}
