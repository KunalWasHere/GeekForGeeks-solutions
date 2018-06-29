#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,val,k,y;
    string s;
    char arr[2001];
    cin>>t;

    while(t--)
    {
        queue <int> q;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='.')
                q.push(i);
        }
        //j=s.size()-1;
        for(i=0;i<s.size();i++)
        {
            if(q.empty())
                val=s.size();
            else
            {val=q.front();
            q.pop();}
            j=s.size()-val;
            y=j;
            for(k=i;k<val;k++)
            {
                arr[j++]=s[k];
            }
            if(y>0)
                arr[y-1]='.';
            i=val;
        }
        for(i=0;i<s.size();i++)
        cout<<arr[i];
        cout<<endl;
    }
}
