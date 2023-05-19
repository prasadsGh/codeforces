/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
int stringmatch(string a, string b)
{
    int n=a.length();
    int m=b.length();
    //prefix of b and suffix of a 
    //ab
    int i=0;
    int j=0;
    int count=0;
    int temp=0;
    int temp1=0;
    while(i<n)
    {
        if(i<n &&  j<m && a[i]==b[j])
        {
            count++;
            if(count>=m)
            {
                temp=n;
            }
            if(count>=n)
            {
                temp1=m;
            }
            i++;
            j++;
        }
        else
        {
            
            if(count>=m)
            {
                temp=n;
            }
            if(count>=n)
            {
                temp1=m;
            }
            count=0;
            j=0;
            i++;

        }
         
    }
    if(temp>0 && temp1>0)
    {
        return max(temp,temp1);
    }
    else if(temp>0)
    {
        return m;
    }
    else if(temp1>0)
    {
        return n;
    }
    return count;
}
void prasad()
{
    //abc,acb,cab,bac,bca,cba
    string a,b,c; cin>>a>>b>>c;
    int count=0;
    int ans=0;
    count+=stringmatch(a,b);
    count+=stringmatch(b,c);
    if(count>b.length())
    {
        count=b.length();
    }
    ans=max(ans,count);
    // cout<<count<<endl;
    count=0;
    count+=stringmatch(a,c);
    count+=stringmatch(c,b);
    if(count>c.length())
    {
        count=c.length();
    }
    ans=max(ans,count);
    // cout<<count<<endl;

    count=0;
    count+=stringmatch(c,a);
    count+=stringmatch(a,b);
    if(count>a.length())
    {
        count=a.length();
    }
    ans=max(ans,count);
    // cout<<count<<endl;

    count=0;
    count+=stringmatch(b,a);
    count+=stringmatch(a,c);
    if(count>a.length())
    {
        count=a.length();
    }
    ans=max(ans,count);
    // cout<<count<<endl;

    count=0;
    count+=stringmatch(b,c);
    // cout<<"1"<<count<<endl;

    count+=stringmatch(c,a);
    // cout<<"2"<<count<<endl;
    if(count>c.length())
    {
        count=c.length();
    }
    ans=max(ans,count);
    // cout<<count<<endl;

    count=0;
    count+=stringmatch(c,b);
    count+=stringmatch(b,a);
     if(count>b.length())
    {
        count=b.length();
    }
    ans=max(ans,count);
    // cout<<count<<endl;
 
    int temp=a.length()+b.length()+c.length();
    
    cout<<temp-ans<<endl;


}

signed main()
{
          ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
          int t=1; 
        //   cin>>t; 
          while(t--)
          {
            prasad();
          }
          return 0;
}
