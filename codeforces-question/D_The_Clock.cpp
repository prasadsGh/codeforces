/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int fun(string s, int k)
{
   //03:12->
   int hour= ((s[1]-'0')+((s[0]-'0')*10))*60;
   int min= (s[4]-'0')+((s[3]-'0')*10);
   int ans=hour+min;
   return ans;
}


void prasad()
{
   /*
    palindrome timindgs ->
    00-00->0
    01-10->70
    02-20->140
    03-30->210
    04-40->280
    05-50->350
    10-01->601
    11-11->671
    12-21->741
    13-31->811
    14-41->881
    15-51->951
    20-02->1202
    21-12->1272
    22-22->1342
    23-32->1412

    total time ->24*60->1440

   */
   string s; cin>>s;
   int k; cin>>k;
   vector<int>pali={0,70,140,210,280,350,601,671,741,811,881,951,1202,1272,1342,1412};
   map<int,int>mp;
   for(int i=0;i<16;i++)
   {
      mp[pali[i]]++;
   }
   
   int count=0;

   int temp= fun(s,k);
   int original=temp;
   temp%=1440;
   if(mp.find(temp)!=mp.end()) count++;
   temp+=k;
   temp%=1440;
   int y=20;
   while(temp!=original)
   {
      
       if(mp.find(temp)!=mp.end()) 
       {
         count++;
     
       }
       temp+=k;
       temp%=1440;
       

      // if(temp>=1440) temp-=1440;
       
   }
   cout<<count<<endl;

}

signed main()
{
          ios_base::sync_with_stdio(false);
            cin.tie(NULL); cout.tie(NULL);
          int t=1; 
          cin>>t; 
          while(t--)
          {
            prasad();
          }
          return 0;
}
