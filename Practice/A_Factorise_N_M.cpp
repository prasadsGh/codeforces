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
bool isPrime(ll n)
{
    if(n==2 or n==3 or n==5) return true;
    if((n%2)==0 or (n%3)==0 or (n%5)==0) return false;
    for(ll i=5; i*i<=n;i++)
    {
        if((n%i)==0 or (n%(i+2))==0)
        {
            return false;
        }
    }
    return true;
}
void dontquit()
{

    ll n; cin>>n;
    ll i=2;
    while(true)
    {
        if(isPrime(i))
        {
            if(!isPrime(i+n))
            {
                cout<<i<<endl;
                return;
            }
        }
        i++;

    }


}
int main()
{
ll t=1;
cin>>t;
while(t--)
{
dontquit();
}
return 0;
}