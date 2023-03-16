/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll find_00(string s)
{
    ll n = s.length();
    ll flag = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
            flag++;
    }
    if (flag < 2)
        return 1e18;

    ll count = 0;
    ll id1 = -1, id2 = -1;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            id1 = i;
            break;
        }
    }
    ll temp = id1;
    while (id1 + 1 < n)
    {
        swap(s[id1], s[id1 + 1]);
        id1++;
        count++;
    }
    for (ll i = temp - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            id2 = i;
            break;
        }
    }
    while (id2 + 2 < n)
    {
        swap(s[id2], s[id2 + 1]);
        id2++;
        count++;
    }
    return count;
}
ll find(string s, char a, char b)
{
    ll n = s.length();
    // cout<<n<<endl;
    ll flag = 0, flag1 = 0;
    ll id1 = -1, id2 = -1;
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == a)
        {
            flag = 1;
            id1 = i;
        }
        if (s[i] == b)
        {
            flag1 = 1;
            id2 = i;
        }
    }
    if (flag == 0 or flag1 == 0)
        return 1e18;
        ll temp=id1,temp1=id2;
        while (id2 + 1 < n)
        {
            swap(s[id2], s[id2 + 1]);
            count++;
            id2++;
        }
        if(temp1<temp)
        {
            id1--;
        }
        while (id1 + 2 < n)
        {
            swap(s[id1], s[id1 + 1]);
            count++;
            id1++;
        }
    

    if (s[0] == '0')
    {
        ll i=0;
        while((i<n) && s[i]=='0')
        {
              count++;
              i++;
        }
      
    }
        
    if (id2 < id1)
        return count + 1;

    return count;
}

void prasad()
{
    string s;
    cin >> s;
    ll ans = min({find_00(s), find(s, '2', '5'), find(s, '5', '0'), find(s, '7', '5')});
    if (ans == 1e18)
    {
        cout << -1 << endl;
        return;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    while (t--)
    {
        prasad();
    }
    return 0;
}
