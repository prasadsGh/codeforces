#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long  n;
        cin>>n;
        long long  temp=n,i=0;
        vector<int>v;
        while(temp>0)
        {
            int k=temp%10;
            if(k!=0)
            {
                v.push_back(k*pow(10,i));

            }
            temp/=10;
            i++;

        }
        // if(n<=9) cout<<n;
        cout<<v.size()<<endl;
        for(int x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
            }
return 0;
}