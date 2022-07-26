//this code belongs to prasad patil
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
//this code belongs to prasad patil
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
//this code belongs to prasad patil
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
//this code belongs to prasad patil
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
//function to multiply the two large numbers

string multiplyTwoNumbers(string num1, string num2) {
   if (num1 == "0" || num2 == "0") {
      return "0";
   }
   string product(num1.size() + num2.size(), 0);
   for (int i = num1.size() - 1; i >= 0; i--) {
      for (int j = num2.size() - 1; j >= 0; j--) {
            int n = (num1[i] - '0') * (num2[j] - '0') + product[i + j + 1];
            product[i + j + 1] = n % 10;
            product[i + j] += n / 10;
      }
   }
   for (int i = 0; i < product.size(); i++) {
      product[i] += '0';
   }
   if (product[0] == '0') {
      return product.substr(1);
   }
   return product;
}
 

void prasad(){
    int b,h;
    cin>>b>>h;
    /*-------------------------------------------*/
    int x;
    cin>>x;
    int barr[x];
    for(int i=0;i<x;i++)
    {
        cin>>barr[i];
    }
      int d1=0;
   d1=(barr[x-1]-barr[0]);
   
   
    /*-------------------------------------------*/
     int x1;
    cin>>x1;
    int barr1[x1];
    for(int i=0;i<x1;i++)
    {
        cin>>barr1[i];
    }
      int d2=0;
     d2=(barr1[x1-1]-barr1[0]);
    
    /*------------------------------------------*/
      d2=max(d1,d2);
    int y;
    cin>>y;
    int harr[y];
    for(int i=0;i<y;i++)
    {
        cin>>harr[i];
    }
     int d3=0;
    d3=(harr[y-1]-harr[0]);
   
    /*-----------------------------------------*/
    int y1;
    cin>>y1;
    int harr1[y1];
    for(int i=0;i<y1;i++)
    {
        
        cin>>harr1[i];
    }
    int d4=0;
   d4=( harr1[y1-1]-harr1[0]);
   d3=max(d3,d4);
 
    /*---------------------------------------*/
    string num1=to_string(d2);
    string z=to_string(h);
   string ans1= multiplyTwoNumbers(num1,z);
   
  string num2 =to_string(d3);
   string pp=to_string(b);
  string ans2=multiplyTwoNumbers(num2,pp);
   

   
  string s= max(ans1,ans2);
  cout<<s<<endl;

}
int main()
{
 fast_cin();
 ll t;
 cin >> t;
 while(t--) {
 prasad();
 }
 return 0;
}