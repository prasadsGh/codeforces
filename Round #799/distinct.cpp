//how to count the distinct elements from the array
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        // for(int x:arr)
        // {
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int count=1;
            while(arr[i]==arr[i+1] && i<n-1)
            {
                count++;
                i++;
              
            } 
            
            v.push_back(count);
            

        }
        // for(int x:v)
        // {
        //     cout<<x<<" ";
        // }
        // cout<<endl;

        int sum=0;

        for(int x:v)
        {
            sum+=(x%2);
        }
        if((n-v.size())%2==0) cout<<v.size()<<endl;
        else cout<<v.size()-1<<endl;
    }
return 0;
}
