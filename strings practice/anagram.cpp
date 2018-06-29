#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    string x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        char arr[101],brr[101];
        if(x.size()!=y.size())
            {
                cout<<"NO"<<endl;
                continue;
            }
        for(i=0;i<x.size();i++)
            arr[i]=x[i];
        for(i=0;i<y.size();i++)
            brr[i]=y[i];
        sort(arr,arr+x.size());
        sort(brr,brr+y.size());
        for(i=0;i<x.size();i++)
        {
            if(arr[i]!=brr[i])
                break;
        }
         if(i==x.size())
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;
    }
}
