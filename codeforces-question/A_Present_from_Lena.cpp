/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
void prasad()
{
    int n;
    cin >> n;
    int k = (n);
    int m=0;
    while (true)
    {
        for (int i = 0; i < k; i++)
        {
            if(i==0)
            {
                cout<<"  ";
            }
            else cout <<" ";
        }
        k--;
        for(int i=0;i<=m;i++)
        {
            cout<<" "<<i;
        }
        for(int i=(m-1);i>=0;i--)
        {
            cout<<" "<<i;
        }
        
        cout<<endl;
        m++;
        if(m>n) break;
        
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while (t--)
    {
        prasad();
    }
    return 0;
}
