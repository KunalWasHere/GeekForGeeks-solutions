#include<bits/stdc++.h>
using namespace std;
int visited[11][11],arr[15],val;
vector <int> v[1000];
vector <int> :: iterator it;
void queen(int n,int i)
{
    int j,k,l;
    for(j=0;j<n;j++)
    {
        //cout<<i<<" "<<j<<endl;
        if(visited[i][j])
            continue;
        arr[i]=j;//cout<<i<<" "<<j<<endl;
        if(i==n-1)
        {
           // v[val].clear();
            for(k=0;k<=i;k++)
                v[val].push_back(arr[k]+1);
            val++;
            continue;
        }
        for(k=i;k<n;k++)
        {if(!visited[k][j])
            visited[k][j]=i+1;}
        for(k=j;k<n;k++)
            {if(!visited[i][k])
            visited[i][k]=i+1;}
        k=i;
        l=j;
        while(k!=n&&l>=0)
        {
            if(!visited[k][l])
            visited[k][l]=i+1;
            k++;
            l--;
        }
        k=i;l=j;
        while(k!=n&&l!=n)
        {
            if(!visited[k][l])
            visited[k][l]=i+1;
            k++;
            l++;
        };
        queen(n,i+1);
        for(k=i;k<n;k++)
        {
            if(visited[k][j]==i+1)
            visited[k][j]=0;
        }//cout<<"hey";
        for(k=j;k<n;k++)
            {
                if(visited[i][k]==i+1)
                    visited[i][k]=0;
            }
        k=i;
        l=j;//cout<<"bey";
        while(k!=n&&l>=0)
        {
            if(visited[k][l]==i+1)
                visited[k][l]=0;
            k++;
            l--;
        }//cout<<"chak";
        k=i;l=j;
        while(k!=n&&l!=n)
        {
            if(visited[k][l]==i+1)
            visited[k][l]=0;
            k++;
            l++;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,n;
        for(i=0;i<1000;i++)
        v[i].clear();
        cin>>n;
        val=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                visited[i][j]=0;
        }
        for(i=0;i<n;i++)
        arr[i]=0;
        queen(n,0);
        if(val==0&&v[0].empty())
           {

            cout<<"-1"<<endl;
        continue;}
        for(i=0;i<val;i++)
        {
            cout<<"[";
            for(it=v[i].begin();it!=v[i].end();it++)
                cout<<*it<<" ";
            cout<<"] ";
        }
        cout<<endl;
    }
}
