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

    ll n; cin>>n;
    ll arr[n];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0) flag=1;
    }
    if(flag)
    {
        cout<<"NO\n";
        return;
    }
    sort(arr,arr+n);
    ll diff=(arr[1]-arr[0]);
    if((arr[n-1]/diff)>300)
    {
        cout<<"NO\n";
        return;
    }
    for(int i=0;i+1<n;i++)
    {
        if(((arr[i+1]-arr[i])%diff)!=0)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    ll temp=arr[0];
    vector<ll>
    if((arr[0]-diff)>=0)
    {
        cout<<(arr[0]-diff)<<" ";
    }
    while(temp<=arr[n-1])
    {
        cout<<temp<<" ";
        temp+=diff;
    }
    cout<<endl;

     


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