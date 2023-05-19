/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
void prasad()
{
    int a, b;

    // a 0
    // b 1
    cin >> a >> b;
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            b--;
        else if (s[i] == '0')
            a--;
    }

    // if(!(n&1))
    // {
    //     if((a&1) or (b&1))
    //     {
    //         cout<<-1<<endl;
    //         return;
    //     }
    // }
    if(n&1 && s[(n/2)]=='?')
    {
        if(a>0 && a&1)
        {
            s[(n/2)]='0';
            a--;
        }
        else if((b>0 && b&1))
        {
            s[(n/2)]='1';
            b--;
        }
    }
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (s[i] == s[j] && s[i] == '?')
        {
            if (a >= b && a >= 2)
            {
                s[i] = '0';
                s[j] = '0';
                i++;
                j--;
                a -= 2;
            }
            else if (b >= a && b >= 2)
            {
                s[i] = '1';
                s[j] = '1';
                i++;
                j--;
                b -= 2;
            }
            else
            {
                cout << -1 << endl;

                return;
            }
        }
        else if (s[i] != s[j])
        {
            if (s[i] == '1' && s[j] == '0')
            {
                cout << -1 << endl;
                return;
            }
            else if (s[i] == '0' && s[j] == '1')
            {
                cout << -1 << endl;
                return;
            }
            else if (s[i] == '1')
            {
                if (b > 0)
                {
                    s[j] = s[i];
                    b--;
                }
                else
                {
                    cout<<-1<<endl;
                    return;
                }
                i++;
                j--;
            }
            else if (s[i] == '0')
            {
                if (a > 0)
                {
                    s[j] = s[i];
                    a--;
                }
                else 
                {
                    cout<<-1<<endl;
                    return; 
                }
                i++;
                j--;
            }
            else if (s[j] == '0')
            {
                if (a > 0)
                {
                    s[i] = s[j];
                    a--;
                }
                else 
                {
                    cout<<-1<<endl;
                    return;
                }

                i++;
                j--;
            }
            else if (s[j] == '1')
            {
                if (b > 0)
                {
                    s[i] = s[j];
                    b--;
                }
                else
                {
                    cout<<-1<<endl;
                    return;
                }
                i++;
                j--;
            }
            else
            {
                i++;
                j--;
            }
        }
        else
        {
            i++;
            j--;
        }
    }
    // if (s[i] == '?')
    // {
    //     if (a > 0)
    //     {
    //         s[i] = '0';
    //         a--;
    //     }
    //     else if (b > 0)
    //     {
    //         s[i] = '1';
    //         b--;
    //     }
    // }
    if (a > 0 or b > 0)
    {
        cout << -1 << endl;
        return;
    }

    // cout<<n-cnt<<" "<<cnt<<endl;
    cout << s << endl;
    return;
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
