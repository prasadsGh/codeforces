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
        map<ll,ll>mp;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            ll x; cin>>x;
            v.push_back(x);
        }
        ll min1=INT_MAX;
        for(int i=0;i<n;i++)
        {
        
            if(mp.count(v[i]))
            {
                min1=min(min1, abs(i-mp[v[i]]));
                mp[v[i]]=i;
            }
            else
            {
                mp[v[i]]=i;
            }
        }
        if(min1==INT_MAX)
        {
            cout<<-1<<endl;
            return;
        }
        cout<<n-min1<<endl;

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