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
void dontquit()
{
    ll n;
    cin >> n;
    ll mat[n][5];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
        }
    }
    int flag = 0,flag2=0;
    ll hash[n], hash1[n];
    memset(hash, 0, sizeof(hash));
    memset(hash1, 0, sizeof(hash1));
    ll max1 = 0, max2 = 0, count = 0;

    for (ll j = 0; j < 5; j++)
    {
        for (ll i = 0; i < n; i++)
        {
            if (mat[i][j] == 1)
            {

                count++;
                hash[i] = 1;
            }
        }

        if (count == n)
        {
            if (flag or flag2)
            {
                cout << "YES\n";
                return;
            }
            flag = 1;
            count = 0;
            memset(hash, 0, sizeof(hash));
        }
        else if ((count >= (n / 2)))
        {
           flag2=1;
            if (flag)
            {
                cout << "YES\n";
                return;
            }
            for (ll i = 0; i < n; i++)
            {
                if(hash[i]!=0)
                hash1[i] = hash[i];
                
            }
            // cout<<endl;
            count = 0;
            memset(hash, 0, sizeof(hash));
        }
        else
        {
            count = 0;
            memset(hash, 0, sizeof(hash));
        }
    }

    if (accumulate(hash1, hash1 + n, 0) == n)
    {
        cout << "YES\n";
        return;
    }
    // for(ll i=0;i<n;i++) cout<<hash1[i]<<" ";
    // cout<<endl;
    cout << "NO\n";
    // cout<<"------------\n";
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