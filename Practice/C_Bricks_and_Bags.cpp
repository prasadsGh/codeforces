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
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    priority_queue<ll> pq1, pq2, pq3;
    ll temp = (n / 3);
    sort(arr, arr + n);
    reverse(arr, arr + n);
    for (int i = 0; i < temp; i++)
    {

        pq2.push(arr[i]);
    }
    ll k = temp;
    for (int i = (n - 1); i >= 0 && temp > 0; i--)
    {
        pq1.push(arr[i]);
        temp--;
    }
    for (int i = k; i < n - k; i++)
    {
        pq3.push(arr[i]);
    }
    while (!pq1.empty())
    {
        cout << pq1.top() << " ";
        pq1.pop();
    }
    cout<<endl;
     while (!pq2.empty())
    {
        cout << pq2.top() << " ";
        pq2.pop();
    }
    cout<<endl;
     while (!pq3.empty())
    {
        cout << pq2.top() << " ";
        pq3.pop();
    }
    cout<<endl;

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