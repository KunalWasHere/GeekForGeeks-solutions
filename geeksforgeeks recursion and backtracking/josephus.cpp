#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        vector <int> v;
        vector <int> :: iterator it;
        for(i=1;i<=n;i++)
            v.push_back(i);
        it=v.begin();
        while(v.size()!=1)
        {
            i=1;
            while(i!=k)
            {
                i++;
                it++;
                if(it==v.end())
                    it=v.begin();
            }
            v.erase(it);
            if(it==v.end())
                    it=v.begin();
        }
        cout<<*(v.begin())<<endl;
    }
}
