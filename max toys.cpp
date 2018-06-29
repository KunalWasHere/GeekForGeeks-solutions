#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,count,arr[1001],k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        i=0;
        count=0;
        while(k-arr[i]>=0)
        {
            count++;
            k=k-arr[i];
            i++;
        }
         cout<<count<<endl;
    }
}
