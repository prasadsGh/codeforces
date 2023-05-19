#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main ()
{
int t;
cin>>t;
while(t--)
{
 ll n;
 cin>>n;
 ll arr[n];
 
 for(int i=0;i<n;i++)
 {
    cin>>arr[i];
 }
 sort(arr,arr+n);
 ll temp1=(arr[n-1]-arr[0]);
 ll temp2=(arr[n-2]-arr[1]);
 ll ans=temp1+temp2;
 cout<<ans<<endl;
}
return 0;
}
 