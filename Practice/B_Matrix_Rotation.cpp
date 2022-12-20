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
void dontquit()
{
    ll mat[2][2];
    ll min1=INT_MAX,max1=INT_MIN;
    for(ll i=0;i<2;i++)
    {
        for(ll j=0;j<2;j++)
        {
            cin>>mat[i][j];
            min1=min(min1,mat[i][j]);
            max1=max(max1,mat[i][j]);
        }
    }

    
    if((mat[0][0]==min1 && mat[1][1]==max1) or (mat[1][1]==min1 && mat[0][0]==max1) or (mat[0][1]==min1 && mat[1][0]==max1) or (mat[1][0]==min1 && mat[0][1]==max1))
    cout<<"YES\n";
    else cout<<"NO\n";
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