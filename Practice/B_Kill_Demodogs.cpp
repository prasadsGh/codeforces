#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define fori(n) for(int i=0;i<n;i++)
#define pb push_back
ll MOD = 1000000007;
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
    ll num1=n;
    ll num2=(n+1);
    ll num3=((2*n)+1);
    if((num1%3)==0)
    {
        num1/=3;
    }
    else if((num2%3)==0)
    {
        num2/=3;
    }
    else if((num3%3)==0)
    {
        num3/=3;
    }
    
    ll val1=n,val2=n+1;
    if((n%2)==0)
    {
        val1/=2;
    }
    else if(((n+1)%2)==0)
    {
        val2/=2;
    }
   ll temp=((num1*num2))%MOD;
   temp*=(num3)%MOD;
   ll temp1=(val1*val2)%MOD;
   ll temp3=((n%(n+1))%MOD);
   ll sum=((temp+temp1)%MOD);
   sum-=(temp3)%MOD;
   sum*=(2022);
   sum%=MOD;
    ll ans=sum;
    cout<<ans<<endl;

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