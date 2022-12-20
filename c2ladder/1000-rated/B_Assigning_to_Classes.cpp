#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int k=(2*n);
    int arr[k];
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+k);
   //without making vectors of alternate numbers , we can just take absolute difference between
   //the middle two elements of this even array 
   cout<<abs(arr[n]-arr[n-1])<<endl;

    }
   

return 0;
}