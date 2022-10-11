#include<bits/stdc++.h>
using namespace std;
# define ll long long int
//_______________________________________________________fast function____________________________________
void fast()
{
    //______don't use it in interactive problems______
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool f=true;
        vector<int>a(n,0),d(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>d[i];
        }
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                a[i]=d[i];
            }
            else
            {
                if(a[i-1]>=d[i]&&d[i]!=0)
                {
                    f=false;
                }
                else
                {
                    a[i]=a[i-1]+d[i];
                }
            }
        }
        if(f)
        {
            for(auto i: a)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
        }
        else
        {
            cout<<"-1\n";
        }
    }
    return 0;
}
