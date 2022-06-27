#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        int i=(n-x);
        int j=(n-x+y);
        int sum=0;
        for(int k=i;k<j;k++)
        {
            sum+=arr[k];

        }
        cout<<sum<<endl;
    }
return 0;
}