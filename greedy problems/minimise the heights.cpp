#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,n,i,arr[32],val,val2,visited[534],max,min,ans;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        for(i=0;i<n;i++)
            {cin>>arr[i];}
        if(n<2)
        {
            cout<<"0"<<endl;
            continue;
        }
        sort(arr,arr+n);
        max=arr[n-1];
        min=arr[0];
        ans=max-min;
        max=max-k;
        min=min+k;
        if(min>max)
        {
            val=min;
            min=max;
            max=val;
        }
        for(i=1;i<n-1;i++)
        {
            val2=arr[i]-k;
            val=arr[i]+k;
            if(val<=max||val2>=min)
                continue;
            if(val-min>max-val2)
                min=val2;
            else
                max=val;
        }
        if(ans>max-min)
        cout<<max-min<<endl;
        else
            cout<<ans<<endl;
    }
}
