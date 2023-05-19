#include <iostream>
using namespace std;
int numberOfStrings(string s,int n)
{
    int result =-404;
    int i=0,j=n-1;
    while((i<n) && (s[i]=='a')) i++;
    while((j>=0) && (s[j]=='a')) j--;
    if(i>j)
    {
        return 0;
    }
    int count =0;
    
    for(int k=i;k<=j;k++)
    {
        if(s[k]=='a')
        {
            while((k<=j) && (s[k]=='a'))
            {
              k++;
            }
            count++;
        }
    }

    result=count+1;
    return result ;

}
int main()
{
     int n; 
     cin>>n;
     string s; 
     cin>>s;
     int ans= numberOfStrings(s,n);
     cout<<ans<<endl;
}