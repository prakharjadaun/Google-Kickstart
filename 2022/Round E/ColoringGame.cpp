#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll t,test=1,n,ans=0;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        
        while(n>0)
        {
            ans++;
            n = n-5;
        }

        cout<<"Case #"<<test<<": "<<ans<<endl;
        test++;
    }
}