/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mini 100100
 vector<int>v1[mini];
int fun(int x)
{
    int ans = 0;
    int count = 1;
    int n = v1[x].size();
    if(n==0) return 0;
    if(v1[x].size()==1) return 1;
    int curr= v1[x][0];
    for (int i = 1; i < v1[x].size(); i++)
    {
        if ((v1[x][i] & 1) != (curr & 1))
        {
            curr=v1[x][i];
            count++;
        }
        
        ans = max(ans, count);

    }
    return ans;
}

void prasad()
{
    int n; cin >> n;
    vector<int>v(n);
    for(int i=1;i<=n;i++)
    {
        v1[i].clear();
    }
    for (int i = 0; i < n; i++) cin >> v[i];
    
   
    for (int i = 0; i < n; i++)
    {
        v1[v[i]].push_back(i);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << fun(i) << " ";
    }
    cout << endl;
   


}




signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);



    int t = 1;
    cin >> t;
    while (t--)
    {
        prasad();
    }
    return 0;
}
