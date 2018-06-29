#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    string s;
    cin>>t;
    char x;
    while(t--)
    {
        stack <char> br;
        cin>>s;
        if(s.size()==0)
           {cout<<"balanced"<<endl;
            continue;}
        for(i=0;i<s.size();i++)
        {
            if(s[i]==')'||s[i]=='}'||s[i]==']')
            {
                if(br.empty())
                {
                    cout<<"not balanced"<<endl;
                    break;
                }
                x=br.top();
                br.pop();
                if(x!=(char)(s[i]-1)&&x!=(char)(s[i]-2))
                    {
                    cout<<"not balanced"<<endl;
                    break;
                }
            }
            else
            {
                br.push(s[i]);
            }

        }
        if(i==s.size()&&br.empty())
            cout<<"balanced"<<endl;
            if(i==s.size()&&!br.empty())
            cout<<"not balanced"<<endl;
    }
}
