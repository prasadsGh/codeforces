/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
bool valid(int a,int b,int n)
{
    if(a>=2) return false;
    if(a<0) return false;
    if(b>=n) return false;
    if(b<0) return false; 
    return true;
}
void prasad()
{
    int n; cin>>n;
    string a,b;
    cin>>a>>b;
    char mat[2][n];
    for(int i=0;i<n;i++)
    {
        mat[0][i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        mat[1][i]=b[i];
    }
    int track[2][n];
    memset(track,0,sizeof(track));
    
     if(n==1)
     {
        cout<<"YES\n";
        return;
     }
  int i = 0, j = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='W' && b[i]=='W')
        {
            cout<<"NO\n";
            return;
        }
    }
    int flag=0;
    if(a[0]=='B')
    {
        i=0,j=0;
    }
    else
    {
        i=1;
        j=0;
    }

   
    track[i][j]=1;
    while(true)
    {
        if(valid(i-1,j,n) && mat[i-1][j]=='B' && track[i-1][j]==0)
        {
                track[i-1][j]=1;
                i--;
        }
        else if(valid(i+1,j,n) && mat[i+1][j]=='B' && track[i+1][j]==0)
        {
                track[i+1][j]=1;
                i++;
        }
        else if(valid(i,j+1,n) && mat[i][j+1]=='B' && track[i][j+1]==0)
        {
                track[i][j+1]=1;
                j++;
        }
        else if(j==(n-1))
        {
                break;
        }
        else
        {
            flag++;
            break;
        }   
    }
  
   
      if(flag==0)
    {
        cout<<"YES\n";
        return;
    }
    
    
    i=1,j=0;
    
    memset(track,0,sizeof(track));
    track[i][j]=1;
    while(true)
    {
        if(valid(i-1,j,n) && mat[i-1][j]=='B' && track[i-1][j]==0)
        {
                track[i-1][j]=1;
                i--;
        }
        else if(valid(i+1,j,n) && mat[i+1][j]=='B' && track[i+1][j]==0)
        {
                track[i+1][j]=1;
                i++;
        }
        else if(valid(i,j+1,n) && mat[i][j+1]=='B' && track[i][j+1]==0)
        {
                track[i][j+1]=1;
                j++;
        }
        else if(j==(n-1))
        {
                break;
        }
        else
        {
            flag++;
            break;
        }   
    }
    
    if(flag==1)
    {
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
    
    // cout<<endl;
}


signed main()
{
          ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
          int t=1; 
          cin>>t; 
          while(t--)
          {
            prasad();
          }
          return 0;
}
