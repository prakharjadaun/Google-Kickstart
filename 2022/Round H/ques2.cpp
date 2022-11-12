#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        ll val,mini=0;
        cin>>val;

        if(val<16)
        mini = val;

        cout<<"Case #"<<i<<": "<<mini<<endl;
        
    }
}