#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        while(n>1)
        {
            if(n%2)
            {
                n=n-1;
                ans++;
            }
            else
            {
                n=n/2;
                ans++;
            }
        }
        ans++;
        cout<<ans<<endl;
    }
}
