#include<bits/stdc++.h>
using namespace std;
float overflow(int i,int j,int k)
{
    float x;
    if(i==1&&j==1)
    {
        if(k>1)
            return (float)(k-1)/2;
        else
            return 0.0;
    }
    if(j==1)
    {
        x=overflow(i-1,j,k);cout<<i<<" "<<x<<endl;
        if(x>1)
            return (x-1)/2;
        else
            return 0.0;
    }
    if(i==j)
    {
        x=overflow(i-1,j-1,k);
        if(x>1)
            return (x-1)/2;
        else
            return 0.0;
    }
    x=overflow(i-1,j-1,k)+overflow(i-1,j,k);
    if(x>1)
            return (x-1)/2;
        else
            return 0.0;
}
float underflow(int i,int j,int k)
{
   float x;
    if(i==1&&j==1)
    {
        return k;
    }
    if(j==1)
    {
        x=overflow(i-1,j,k);
        return x;
    }
    if(i==j)
    {
        x=overflow(i-1,j-1,k);
        return x;
    }
    x=overflow(i-1,j-1,k)+overflow(i-1,j,k);
    return x;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float x;
        int i,j,k;
        cin>>k>>i>>j;
        x=underflow(i,j,k);
        if(x>1)
            cout<<"1"<<endl;
        else
            cout<<x<<endl;
    }
}
