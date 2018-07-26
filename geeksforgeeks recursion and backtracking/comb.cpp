#include<bits/stdc++.h>
using namespace std;
int dp[15][110],arr[15],l,qrr[15];
vector <int> v[100];
vector <int> ::iterator it;
/*void recursion(int n,int sum,int x)
{
    if(n==0)
        return;
    int a=0,b=0;
    if(sum>=arr[n]&&dp[n-1][sum-arr[n]])
    {
        v[l].push_back(arr[n]);
        a=1;
        recursion(n-1,sum-arr[n],x);
    }
    if(a)
    l++;
    if(dp[n-1][sum])
    {
        for(it=v[x].begin();it!=v[x].end();it++)
            v[x+1].push_back(*it);
        b=1;
        recursion(n-1,sum,x+1);
    }
    if(!a&&!b)
        v[x+1].clear();
}*/
void recursion(int n,int sum,int k)
{
    int i;
    if(sum==0)
    {
        for(i=0;i<k;i++)
            v[l].push_back(qrr[i]);
        l++;
        return;
    }
    if(n<0)
        return;
    if(arr[n]>sum)
    {
        recursion(n-1,sum,k);
    }
    else
    {
        qrr[k]=arr[n];
        recursion(n-1,sum-arr[n],k+1);
        recursion(n-1,sum,k);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,b;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        cin>>b;
        for(i=0;i<=n;i++)
            for(j=0;j<110;j++)
                dp[i][j]=0;
        for(i=0;i<=n;i++)
            dp[i][0]=1;
        for(i=1;i<110;i++)
            dp[0][i]=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<110;j++)
            {
                if(j<arr[i-1])
                    dp[i][j]=dp[i-1][j];
                else
                {
                    dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
                }
            }
        }
        /*for(i=0;i<=n;i++)
        {
            for(j=0;j<11;j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
        }*/
        string val="";
        vector <string> ans;
        vector <string> :: iterator iti;
        l=0;
        recursion(n-1,b,0);
        for(i=0;i<l;i++)
        {
            sort(v[i].begin(),v[i].end());
            for(it=v[i].begin();(it+1)!=v[i].end();it++)
                val=val+(char)(*it+48)+" ";
                val=val+(char)(*it+48);
            ans.push_back(val);
            val="";
        }
        if(ans.empty())
        {
            cout<<"Empty"<<endl;
            continue;
        }
        for(iti=ans.begin();(iti+1)!=ans.end();iti++)
        {
            if(*iti==*(iti+1))
            {
                ans.erase(iti);
                iti--;
            }
        }
        sort(ans.begin(),ans.end());
        if(ans.empty())
        {
            cout<<"Empty"<<endl;
            continue;
        }
        for(iti=ans.begin();(iti)!=ans.end();iti++)
            cout<<"("<<*iti<<")";
            cout<<endl;

    }
}
