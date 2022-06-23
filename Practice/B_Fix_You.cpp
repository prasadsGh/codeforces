#include <bits/stdc++.h>
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

        int count1=0,count2=0;
        for(int i=0;i<m-2;i++)
        {
            if(arr[0][i]=='D') count1++;
        }
       

        for(int i=0;i<n-2;i++)
        {
            if(arr[i][m-1]=='R') count1++;
        }

        for(int i=0;i<n-2;i++)
        {
            if(arr[i][0]=='R') count2++;
        }
       

        for(int i=0;i<m-2;i++)
        {
            if(arr[n-1][i]=='D') count2++;
        }
        if(arr[0][0]=='R')
        {
            if(n==1 && m==1)
        cout<<count1<<endl;
        else cout<<count1+1<<endl;
        }
        
        else 
        {
            if((n==1 && m==1))cout<<count2<<endl;
            else cout<<count2+1<<endl;
        }
    }
return 0;
}