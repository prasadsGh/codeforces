#include <bits/stdc++.h>
using namespace std;

int min_index(vector<int> &v)
{
    int minElementIndex = min_element(v.begin(),v.end()) - v.begin();
    return minElementIndex;
}
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<int > v;
        while(n>0)
        {
            int rem=n%10;
            v.push_back(rem);
            n/=10;
        }
        
        int min_ind=min_index(v);
        sort(v.begin(),v.end());
        if((min_ind+1)%2==0) cout<<v[1]<<endl;
        else if((min_ind+1)%2==1) cout<<v[0]<<endl;
    }

}
int main(){
    solve();
return 0;
}