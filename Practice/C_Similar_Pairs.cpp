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
ll isPrime[1000000001];
void sieve(){ll maxN=1000000000;for(ll i=1;i<=maxN;i++) isPrime[i]=1; isPrime[0]=isPrime[1]=0;
for(ll i=2;i*i<=maxN;i++){ if(isPrime[i]) { for(ll j=(i*i);j<=maxN;j+=i) isPrime[j]=0;}}}
//----------------------code begines here-----------------------
void dontquit()
{


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