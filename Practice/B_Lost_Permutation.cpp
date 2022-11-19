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
ll sum1(ll n, ll a)
{
    ll sum=0;
   while(n)
   {
    sum+=a;
    a++;
    n--;
   }
    return sum;
}
void dontquit()
{
    ll n,x; cin>>n>>x;
    vector<ll>v;
    ll x1=0;

    for(ll i=0;i<n;i++)
    {
        ll x; cin>>x;
        v.push_back(x);
        x1+=x;
    }
    sort(all(v));
    int j=1;
    ll n1=*max_element(all(v));
    int sum=((n1)*(n1+1))/2;
    // cout<<sum<<endl;
    
    // cout<<x1<<endl;
    x1=(sum-x1);
    x-=x1;
    // cout<<x<<endl;
    if(x<0)
    {
        cout<<"NO\n";
        return;
    }
    else if(x==0)
    {
        cout<<"YES\n";
        return ;
    }
    else
    {
        int sum11=0;
        int i=1;
        int xp=v[n-1]+1;
        while(sum1(i,xp)<x)
        {
            // cout<<sum1(i,xp)<<endl;
            // cout<<xp<<endl;
            i++;
        }
        // cout<<"----\n";

        if(sum1(i,xp)==x)
        {
            cout<<"YES\n";
            return;
        }
        else 
        {
            cout<<"NO\n";
            return;
        }

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