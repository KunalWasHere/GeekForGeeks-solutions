#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,arr[9]={1,2,5,10,20,50,100,500,1000},lower;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n>0)
        {
            lower=lower_bound(arr,arr+9,n)-arr;
            if(arr[lower]!=n)
                lower--;
            cout<<arr[lower]<<" ";
            n=n-arr[lower];
        }
        cout<<endl;
    }

}
