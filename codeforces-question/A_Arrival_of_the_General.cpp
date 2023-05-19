#include <bits/stdc++.h>
using namespace std;
int get_max(vector<int>v)
{
    int temp=v[0],k=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>temp)
        {
            temp=v[i];        k=i;
        }


    }
    return k;
}
int get_min(vector<int>v)
{
    int temp=v[v.size()-1],k=(v.size()-1);
    for(int i=v.size()-1;i>=0;i--)
    {
        if(v[i]<temp)
        {
            temp=v[i];      
              k=i;
        }

    }
    return k;
}

int main(){
    int n;
    cin>>n;
    vector<int > v;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
    }
    int k=get_max(v);
    int l=get_min(v);
    int res=(k+(n-l-1));
    if(k<l)
    {
        cout<<res<<endl;

    }
    else if(k>l)
    {
        cout<<res-1<<endl;
            }

return 0;
}