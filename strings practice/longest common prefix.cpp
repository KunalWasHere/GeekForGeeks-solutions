#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        string s,t;
        vector <string> v;
        vector <char> ans;
        vector <char> :: iterator it;
        for(i=0;i<n;i++)
        {
            cin>>s;
            v.push_back(s);
        }
        sort(v.begin(),v.end());
        s=*v.begin();
        t=*(v.end()-1);
        i=0;
        j=0;
        while((i!=s.size()||j!=t.size())&&s[i]==t[j])
        {
            ans.push_back(s[i]);
            i++;
            j++;
        }
        if(ans.empty())
            cout<<"-1"<<endl;
        else
        {
            for(it=ans.begin();it<ans.end();it++)
                cout<<*it;
            cout<<endl;
        }
    }
}
