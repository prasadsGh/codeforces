/*
   author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
//pbds header file
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
/*
   functionalities that can be used  with pdbs --> it has similar functions as set
   --> find_by_order - print element at ith index -- returns iterator
   --> order_of_key - print no of elements less than x (pbds a; a.order_of_key(x))
   --> lower bound --> similar to set - a.lower_bound(x)
   --> a.erase(x) -- values that is not present in ordered set then nothing will be affected

   --> declaration of pbds --> pdbs a;

   --> you can also change less<int> to greater<int> or less_equal<int> to get respective result
*/
#define ll long long
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void prasad()
{
   string s; cin >> s;
   int n = s.length();
   stack<int>st;
   stack<int>temp;
   for (int i = 0; i < n; i++)
   {
      if (st.empty())
      {
         st.push(s[i] - '0');
      }
      else if ((s[i] - '0') >= st.top())
      {
         st.push(s[i] - '0');
      }
      else if ((s[i] - '0') < st.top())
      {
         while ((!st.empty()) && (st.top() > (s[i] - '0')))
         {
            int temp1 = st.top();
            st.pop();
            temp.push(min(9, temp1 + 1));
         }
         st.push(s[i] - '0');
      }
   }

   vector<int>ans;
   while (!st.empty())
   {
      ans.push_back(st.top());
      st.pop();
   }
   while (!temp.empty())
   {
      ans.push_back(temp.top());
      temp.pop();
   }
   sort(ans.begin(), ans.end());
   for (int i = 0; i < n; i++)
   {
      cout << ans[i];

   }
   cout << endl;




}

signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);

   int t = 1;
   cin >> t;
   while (t--)
   {
      prasad();
   }
   return 0;
}
