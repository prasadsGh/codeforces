#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    // your code goes here
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, x, y;
        cin >> x >> y >> a >> b;
        if ((x / a) == (y / b))
        {
            double temp=((x%a)/double(a));
            double temp1=((y%b)/double(b));
            if (temp <temp1)

            {
                cout << "Chef\n";
            }
            else if (temp1 < temp)
            {
                cout << "Chefina\n";
            }
            else
            {
                cout << "Both\n";
            }
        }
        else if ((x / a) < (y / b))

        {
            cout << "Chef\n";
        }
        else if ((y / b) < (x / a))
        {
            cout << "Chefina\n";
        }
        
    }
    return 0;
}
