#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    
    for(ll it = 1;it<=t;it++)
    {
        ll len, N,val;
        char ch,temp;
        ll numLaps=0,remaining=0;
        cin>>len>>N;
        
        for(ll i=0;i<N;i++)
        {
            cin>>val>>ch;
            
            if(i==0)
            {
                temp = ch;
            }
            if(temp==ch)
            {
                val = val+remaining;
                numLaps += (val/len);

                remaining = val%len;
                
            }
            else
            {
                val = abs(val - remaining);
                if(val>=len)
                {
                    numLaps += val/len;
                    remaining = val%len;
                }
                else
                {
                    remaining = val;
                }
            }

            temp = ch;

        }

        cout<<"Case #"<<it<<": "<<numLaps<<endl;
    }
    return 0;
}