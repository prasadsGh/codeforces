#include <iostream>
using namespace std;
void prasad(int n)
{
   if(n==0) return;
   int temp=(n%2);
   prasad(n/2);
   cout<<temp;


   
}
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
         int n;
         cin>>n;
        prasad(n);
        cout<<endl;

    }
   
    return 0;
}