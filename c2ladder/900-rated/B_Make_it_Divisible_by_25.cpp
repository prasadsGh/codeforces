#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define fori(n) for (int i = 0; i < n; i++)
#define pb push_back
ll MOD = 998244353;
#define dbg(x) cout << #x << " = " << x << ln
#define INF 2e18
#define all(x) (x).begin(), (x).end()
//"this is code of prasads_cf"
//-----------------------SIEVE OF ERATOSTHENES-----------------
vector<ll> sieve(int n)
{
   int *arr = new int[n + 1]();
   vector<ll> vect;
   for (int i = 2; i <= n; i++)
      if (arr[i] == 0)
      {
         vect.push_back(i);
         for (int j = 2 * i; j <= n; j += i)
            arr[j] = 1;
      }
   return vect;
}
//-----------------------BINARY EXPONTIATION----------------------
ll power(ll a, ll n)
{
   ll res = 1;
   while (n)
   {
      if (n % 2)
      {
         res *= a;
         n--;
      }
      else
      {
         a *= a;
         n /= 2;
      }
   }
   return res;
}
//----------------------code begines here-----------------------
void dontquit()
{
   string s;
   cin >> s;
   ll n = s.length();
   // reverse(all(s));
   // 05 57 52 00
   ll count = INT_MAX;
   for (int i = 0; i+1< n; i++)
   {

      for (int j = i + 1; j < n; j++)
      {
         if (s[i] == '5' and s[j] == '0')
         {
            count = min(count, n - i - 2);
          
         }
         else if (s[i] == '7' and s[j] == '5')
         {
            count = min(count, n - i - 2);

           
         }
         else if (s[i] == '2' and s[j] == '5')
         {
            count = min(count, n - i - 2);
           
         }
         else if (s[i] == '0' and s[j] == '0')
         {
            count = min(count, n - i - 2);
         
         }
        
      }
   }
   cout <<count<< endl;
}
int main()
{
   ll t = 1;
   cin >> t;
   while (t--)
   {
      dontquit();
   }
   return 0;
}