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
    ll temp=1;
    ll sum=0;
    ll n,k; cin>>n>>k;
    ll i=1, count=1;
   while(i<=n)
   {
    i+=2;
    count++;
   }
   count--;
   if(k>count)
   {
    cout<<-1<<endl;
    return;
   }
    char mat[n][n];
    ll count1=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(i==j && !(i&1) && !(j&1) && (count1<k))
            {
                mat[i][j]='R';
                count1++;
            }
            else mat[i][j]='.';
        }
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cout<<mat[i][j];
        }
        cout<<endl;
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