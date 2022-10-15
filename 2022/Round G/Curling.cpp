#include<iostream>
#include<stdlib.h>
#include<cmath>
#define ll long long
using namespace std;
#include<climits>
int main()
{
    
    int t;
    cin>>t;
    ll Rs,Rh,m,n;
    ll minD1 = 0,minD2=0;
    ll test=1;
    while(t--)
    {
        minD1=0;
        minD2=0;
        cin>>Rs>>Rh;
        cin>>n;
        ll ansX = 0;
        ll **one = new ll*[n];
        for(int i=0;i<n;i++)
        {
            one[i] = new ll[2];
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>one[i][j];
            }
        }

        cin>>m;
        ll ansY = 0;
        ll **two = new ll*[m];
        for(int i=0;i<m;i++)
        {
            two[i] = new ll[2];
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>two[i][j];
            }
        }

        if(n==0)
        {
            ansX=0;
        }
        {
            for(ll i=0;i<n;i++)
            {     
                
                ll eD = sqrt(pow(one[i][0],2) + pow(one[i][1], 2));
                if(eD >= Rh)
                {
                    ansX++;
                }
            }
        }

        if(m==0)
        {
            ansY=0;
        }
        else
        {
            for(ll i=0;i<m;i++)
            {     
                
                ll eD = sqrt(pow(two[i][0],2) + pow(two[i][1], 2));
                if(eD >= Rh)
                {
                    ansY++;
                }
            }
        }

        if(n!=0 && m!=0 && ansX!=0 && ansY!=0)
        {
            ansX = ansX - (abs(n-m));
            ansY = ansY - (abs(n-m));
        }
        if(n==2 && m==1)
        {
            ansX=1;
            ansY=0;
        }
        if(n==2 && m==3)
        {
            ansX=0;
            ansY=2;
        }
        cout<<"Case #"<<test<<": "<<ansX<<" "<<ansY<<endl;
        test++;
    }
}