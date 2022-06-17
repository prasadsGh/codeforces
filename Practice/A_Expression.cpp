#include <bits/stdc++.h>
using namespace std;

int main(){
   
    long long  arr[3];
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];

    }
    // sort(arr,arr+3);
    int res1=((arr[0]+arr[1])*arr[2]), res2=(arr[0]*arr[1]*arr[2]),res3=arr[0]+arr[1]+arr[2],res4=(arr[0]+(arr[1]*arr[2])),res5=(arr[0]*(arr[1]+arr[2]));
    cout<<max(max(res1,res5),max(res2,max(res3,res4)))<<endl;

    
    return 0;
}