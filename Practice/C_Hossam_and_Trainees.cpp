#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define fori(n) for(int i=0;i<n;i++)
#define pb push_back
ll MOD = 998244353;
#define dbg(x) cout << #x << " = " << x << ln
#define INF 2e18
#define all(x) (x).begin(), (x).end()
//"this is code of prasads_cf"
//-----------------------SIEVE OF ERATOSTHENES-----------------
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)
if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
//-----------------------BINARY EXPONTIATION----------------------
ll power(ll a,ll n){ ll res=1; while(n){if(n%2){res*=a;n--;}else{a*=a;n/=2;}} return res;}
//----------------------code begines here-----------------------
void dontquit(vector<ll>&facts,ll n1)
{
    set<ll>s;
    vector<ll>v;
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    ll x;
    cin>>x;
    v.pb(x);
    }
    for(int i=0;i<n;i++)
    {
        for(ll j=0;j<n1;j++)
        {
            if((v[i]%facts[j])==0)
            {
                if(s.find(facts[j])!=s.end())
                {
                    cout<<"YES\n";
                    return;
                }
                else s.insert(facts[j]);
            }
        }
    }
    cout<<"NO\n";
    return;

}
int main()
{
ll t=1;
cin>>t;

vector<ll>facts;
facts.push_back(2);
facts.push_back(3);
for(ll i=5;i*i<=1e9;i++)
{
    facts.push_back(i);
}
ll n1=facts.size();

while(t--)
{
dontquit(facts,n1);
}
return 0;
}