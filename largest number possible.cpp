#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,s,a,i;
    vector <int> v;
    vector <int> :: iterator it;
    cin>>t;
    while(t--)
    {
        a=0;
        cin>>n>>s;
        if(9*n<s||s==0)
        {
            cout<<"-1"<<endl;
            continue;
        }
        while(s>0)
        {
            if(s>9)
            {
                v.push_back(9);
                s=s-9;
            }
            else
            {
                v.push_back(s);
                s=0;
            }
        }
        for(it=v.begin();it<v.end();it++)
        {
            cout<<*it;
            a++;
        }
        for(i=a;i<n;i++)
            cout<<"0";
        cout<<endl;
        v.clear();
    }
}
