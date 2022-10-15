#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a[1000][31];
    int maxD[31];
    int t;
    cin>>t;
    int test=1;
    while(t--)
    {
        int m,n,p;

        cin>>m>>n>>p;
        for(int i=0;i<n;i++)
        {
            maxD[i] = 0;
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(a[i][j]>maxD[j])
                {
                    maxD[j]=a[i][j];
                }
            }
        }

        long long ans = 0;
        for(int i=0;i<n;i++)
        {
            if(a[p-1][i] < maxD[i])
            {
                ans += maxD[i] - a[p-1][i];
            }
        }

        cout<<"Case #"<<test<<": "<<ans<<endl;
        test++;
    }
}