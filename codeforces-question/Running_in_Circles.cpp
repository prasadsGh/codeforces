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
    ll l,n; cin>>l>>n;
   vector<pair<ll,char>>pr;
   ll x; char y;
   ll n1=n;
    for(ll i=0;i<n;i++)
    {
        cin>>x>>y;
       pr.push_back({x,y});
    }
       
    
    ll count=0;
    // for(ll i=0;i+1<n1;i++){
    //     if((pr[i].second==pr[i+1].second))
    //     {
    //         pr[i+1].first+=((pr[i].first)%l);
    //         count+=(pr[i].first/l);

    //     }
    //     else{
       
    //     pr[i+1].first-=pr[i].first;
    //         if((pr[i+1].first-pr[i].first)<=0){
    //              count+=((abs(pr[i+1].first-pr[i].first)/l));
    //              if((abs(pr[i+1].first-pr[i].first)/l)>0)
    //              count--;
    //        pr[i+1].first-=((abs(pr[i+1].first-pr[i].first)%l));

    //        }else {
    //           pr[i+1].first-=pr[i].first;
    //        }
    //    pr[i+1].first=abs(pr[i+1].first);
    //        pr[i+1].first=abs(pr[i+1].first);
    //     }
    // }
    // count+=(pr[n1-1].first/l);
    // cout<<count<<endl;
    for(int i=1;i<n;i++)
    {
        if((pr[i-1].second==pr[i].second))
        {
            count+=(pr[i-1].first)/l;
            pr[i].first-=(pr[i-1].first)%l;
        }
        else
        {
            count+=(pr[i-1].first/l);
            pr[i].first-=(pr[i-1].first%l);
             if(pr[i].first<0)
            {
                pr[i].first=abs( pr[i].first);
                
            }
            if((pr[i].first/l)>0){
                    count--;
                }
        }
    }
    count+=(pr[n-1].first/l);
    
    cout<<count<<endl;




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