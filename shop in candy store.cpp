#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,arr[1001],min,max,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        min=0;max=0;
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        i=0;
        j=n-1;
        while(j>=i)
        {
            min=min+arr[i];
            i++;
            j=j-k;
        }
        i=0;
        j=n-1;
        while(i<=j)
        {
            max=max+arr[j];
            j--;
            i=i+k;
        }
        cout<<min<<" "<<max<<endl;
    }
}
