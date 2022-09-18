#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char arr[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }

        ll count=0;
      for(int i=0;i<m-1;i++)
      {
        if(arr[n-1][i]=='R') continue;
        else count++;
      }
       for(int i=0;i<n-1;i++)
      {
        if(arr[i][m-1]=='D') continue;
        else count++;
      }
      cout<<count<<endl;
    }
return 0;
}