// Code by Krushikesh Shashikant Pisal

#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef long double ld;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; 

#define all(x) (x).begin(), (x).end()
#define pb push_back;

ll factorial(ll num)
{
 
    return (num == 1 or num == 0) ? 1 : (num * factorial(num - 1)) % 1000000007;
}

bool isPrime(int n)
{
    if (n <= 1){
        return false;
    }    
    if (n <= 3){
        return true;
    }    
 
    if (n % 2 == 0 || n % 3 == 0){
        return false;
    }
    // Using concept of prime number
    // can be represented in form of
    // (6*n + 1) or(6*n - 1) hence
    // we have to go for every multiple of 6 and
    // prime number would always be 1 less or 1 more than
    // the multiple of 6.
    for (int i = 5; i * i <= n; i = i + 6){
        if (n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }    
    return true;

}
 
void krushikesh(ll n) {
  cout<<n<<endl;
}
int main() {
	ll T=1;
	string ans;
	ll answer;
	cin>>T;
	while(T--){
	    ll a, b;
      cin>>a>>b;
     
     ll counter=0;
     if( max(a, b)%min(a, b) ==0){
     ll d=max(a, b) /min(a, b) ;
    ll k =log2(d) ;
    ll kp=pow(2,k);
   if( kp ==d) {
    while(d%8==0) {
          d=d/8;
          counter++;
     }
    while(d%4==0) {
          d=d/4;
          counter++;
   }
   while(d%2==0) {
       d=d/2;
         counter++;
   }
   answer=counter;
}
else{
    answer=-1;
 }
  }
else{
    answer=-1;
}
  krushikesh(answer) ;
	}
	return 0;
}