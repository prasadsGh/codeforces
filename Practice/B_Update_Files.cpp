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
void dontquit()
{
    ll n, k;
    cin >> n >> k;
    ll i = 0;
    ll temp = pow(2, i);
    ll count = 0;
    while (temp < k && temp < n)
    {
        temp+=pow(2,i);i++;
        count++;
    }
    // cout<<temp<<endl;
    ll temp1=(n-temp);
    double kp=(temp1/double(k));
    if(temp<n)
    count+=(ceil(kp));
    cout<<count<<endl;
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