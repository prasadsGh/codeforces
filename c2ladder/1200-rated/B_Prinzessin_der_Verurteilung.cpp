#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define fori(n) for (int i = 0; i < n; i++)
#define pb push_back
ll MOD = 998244353;
#define dbg(x) cout << #x << " = " << x << ln
#define INF 2e18
#define all(x) (x).begin(), (x).end()
//"this is code of prasads_cf"
//-----------------------SIEVE OF ERATOSTHENES-----------------
vector<ll> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<ll> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
//-----------------------BINARY EXPONTIATION----------------------
ll power(ll a, ll n)
{
    ll res = 1;
    while (n)
    {
        if (n % 2)
        {
            res *= a;
            n--;
        }
        else
        {
            a *= a;
            n /= 2;
        }
    }
    return res;
}
//----------------------code begines here-----------------------
string abc = "abcdefghijklmnopqrstuvwxyz";
void dontquit()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> arr(26, 0);
    for (int i = 0; i < n; i++)
        arr[(s[i] - 'a')] = 1;
    // for length 1 string
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == 0)
        {
            cout << char(i + int('a')) << endl;
            return;
        }
    }
    // for length 2 string
    set<string> sb;
    for (int i = 0; i + 1 < n; i++)
    {

        string ab = "";
        ab += s[i];
        ab += s[i+1];
        sb.insert(ab);
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            string abc = "";
            abc += char(i + int('a'));
            abc += char(j + int('a'));
            if (sb.find(abc) == sb.end())
            {
                cout << abc << endl;
                return;
            }
        }
    }
    // for 3 length string
    set<string> st;
    for (int i = 0; i + 2 < n; i++)
    {

        string ab = "";
        ab += s[i];
        ab += s[i+1];
        ab += s[i+2];
        st.insert(ab);
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            string abc = "a";
            abc += char(i + int('a'));
            abc += char(j + int('a'));
            if (st.find(abc) == st.end())
            {
                cout << abc << endl;
                return;
            }
        }
    }
}
int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        dontquit();
    }
    return 0;
}