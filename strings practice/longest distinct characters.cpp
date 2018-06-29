#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        map <char,int> m;
        map <char,int> :: iterator it;
        int max=0,start=0,i;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            it=m.find(s[i]);
            if(it==m.end()||it->second<start)
            {
                if(it->second<start)
                    it->second=i;
                else
                m.insert(pair<char,int> (s[i],i));
            }
            else
            {
                if(i-start>max)
                    max=i-start;
                start=(it->second)+1;
                it->second=i;

            }
        }
        cout<<max<<endl;
    }
}
