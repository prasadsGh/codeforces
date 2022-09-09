#include <iostream>
using namespace std;
void prasad(int n)
{
    if(n<10)
    {
        cout<<n<<" ";
        return ;
    } 
    int temp=(n%10);
    prasad((n/10));
    cout<<temp<<" ";
   

   
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