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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int sum = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < n; )
    {
        if (v[i] > 0)
        {
            maxi = INT_MIN;

            while (i < n && v[i] > 0)
            {
               
                maxi=max(maxi,v[i]);
                i++;
            }
            
            sum+=maxi;
        }
        else
        {
            maxi=INT_MIN;
            while(i< n && v[i]<0)
            {
               
                maxi=max(maxi,v[i]);
                i++;
            }
         
            sum+=maxi;
        }
    }

    cout<<sum<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        prasad();
    }
    return 0;
}
