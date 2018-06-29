#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,n1,n2,i,min,ans;
    vector < pair<int,int> > v;
    vector < pair<int,int> > :: iterator it;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>n1>>n2;
            v.push_back(make_pair(n2,n1));
        }
        sort(v.begin(),v.end());
        min=v[0].first;
        ans=1;
        for(it=v.begin();it<v.end();it++)
        {
            if(it->second>min)
            {
                ans++;
                min=it->first;
            }
        }
        cout<<ans<<endl;
        v.clear();
    }
}
