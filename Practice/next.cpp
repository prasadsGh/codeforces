#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int i=k-1,flag=0;
    while((arr[i]==arr[k-1]) and arr[i]!=0)
    {
        i++;
        flag=1;
    }
    if(flag==1)
    {
         cout<<i<<endl;
    }
    int flag2=0;
    int  m=k-1;
    if(arr[k-1]==0)
    {
        
        for(int j=k-1;j>=0;j--)
        {
            if(arr[j]==0)
            {
                m--;
                flag2=1;
            }
        }

    }
    if(flag2==1)
    {
        cout<<m+1<<endl;
    }

  




return 0;
}
