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
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll count=3;
    if(is_sorted(arr,arr+n))
    {
        cout<<0<<endl;
        return;
    }
    ll temp=0,temp1=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1) temp=i;
        if(arr[i]==n) temp1=i;
    }
    if(arr[0]==1  && arr[n-1]==(n)) 
    {
        cout<<1<<endl;
        return;
    }
    else if(arr[0]==1  && arr[n-1]!=(n))
    {
        cout<<1<<endl;
    }
     else if(arr[0]!=1  && arr[n-1]==(n))
    {
        cout<<1<<endl;
    }
    else if((arr[0]==n)&& (arr[n-1]==1))
    {
        cout<<3<<endl;
    }
    else cout<<2<<endl;
  
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