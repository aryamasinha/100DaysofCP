#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],count=0;
        for(int i=0;i<n;i++)
         cin>>a[i];
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int sum=0,prod=1;
                for(int k=i;k<=j;k++)
                {
                    sum+=a[k];
                    prod*=a[k];
                }
                if(sum==prod)
                 count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}