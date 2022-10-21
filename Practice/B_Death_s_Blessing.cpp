#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void prasad()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll arr1[n];
    ll sum=0;

    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
        sum+=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    sort(arr,arr+n);
    sort(arr1,arr1+n);
    for(int i=0;i<n-1;i++)
    {
        sum+=arr1[i];
    }
    cout<<sum<<endl;


}
int main()
{
ll t=1;
cin>>t;
while(t--)
{
prasad();
}
return 0;
}