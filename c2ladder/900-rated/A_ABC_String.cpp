/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool valid(string s, char a, char b, char c)
{
    stack<char> s1;
    ll n = s.length();
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == a)
        {
            s1.push(s[i]);
        }
        else if (s[i] == b or s[i] == c)
        {
            if (s1.empty())
            {
                return false;
            }
            else if (s1.top() == a)
            {
                s1.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if (s1.empty())
        return true;
    else
        return false;
}
void prasad()
{
    string s;
    cin >> s;
    if (valid(s, 'A', 'B', 'C') or
        valid(s, 'B', 'A', 'C') or
        valid(s, 'C', 'B', 'A'))
    {
        cout << "YES\n";
        return;
    }
    reverse(s.begin(),s.end());
    if (valid(s, 'A', 'B', 'C') or
        valid(s, 'B', 'A', 'C') or
        valid(s, 'C', 'B', 'A'))
    {
        cout << "YES\n";
        return;
    }
    cout<<"NO\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        prasad();
    }
    return 0;
}
