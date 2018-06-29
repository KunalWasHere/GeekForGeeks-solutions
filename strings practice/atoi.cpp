#include<bits/stdc++.h>
using namespace std;
int value(char x)
{
    switch(x)
    {
        case '0':return 0;
        case '1':return 1;
        case '2':return 2;
        case '3':return 3;
        case '4':return 4;
        case '5':return 5;
        case '6':return 6;
        case '7':return 7;
        case '8':return 8;
        case '9':return 9;
        default:return -1;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int ans=0,i;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            if(value(s[i])==-1)
            {
                cout<<"-1"<<endl;
                break;
            }
            ans=ans*10+value(s[i]);
        }
        if(i==s.size())
            cout<<ans<<endl;
    }
}
