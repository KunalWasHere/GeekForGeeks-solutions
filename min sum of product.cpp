#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,arr[51],brr[51],ans,i;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<n;i++)
            cin>>brr[i];
        sort(arr,arr+n);
        sort(brr,brr+n);
        for(i=0;i<n;i++)
            ans=ans+arr[i]*brr[n-1-i];
        cout<<ans<<endl;
    }
}
