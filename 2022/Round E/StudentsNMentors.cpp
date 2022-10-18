#include<iostream>
#include<vector>
#include<map>
#define ll long long
using namespace std;

int main()
{
    map<ll,int,greater<int>> m;
    map<ll,int,greater<int>>::iterator it;
    vector<ll> in;
    vector<ll> out;
    ll t,n,test=1,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
       

        for(int i=0;i<n;i++)
        {
            cin>>temp;
            in.push_back(temp);
            m[temp]++;
        }

        for(int i=0;i<in.size();i++)
        {
            bool flag = false;

            for(it = m.begin();it!=m.end();it++)
            {
                if((*it).first<=in[i]*2)
                {
                    if((*it).first==in[i] && (*it).second>1)
                    {
                        flag = true;
                        out.push_back((*it).first);
                        break;
                    }
                    if((*it).first!=in[i])
                    {
                        flag = true;
                        out.push_back((*it).first);
                        break;
                    }
                }
            }
            if(!flag)
            out.push_back(-1);
        }

        cout<<"Case #"<<test<<": ";
        for(int i=0;i<out.size();i++)
        {
            cout<<out[i]<<" ";
        }
        cout<<endl;

        test++;
        in.clear();
        out.clear();
        m.clear();
    }
}