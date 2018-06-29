#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        vector < pair<char,int> > v;
        vector < pair<char,int> > :: iterator it;
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            v.push_back(make_pair(s[i],i));
        }
        sort(v.begin(),v.end());
        for(it=v.begin();it+1<v.end();it++)
        {
            while((it+1)<v.end()&&it->first==(it+1)->first)
                v.erase(it+1);
                //cout<<it->first;

        }
        sort(v.begin(), v.end(), sortbysec);
        for(it=v.begin();it<v.end();it++)
            cout<<it->first;
        cout<<endl;
    }
}
