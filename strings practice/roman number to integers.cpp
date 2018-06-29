#include<bits/stdc++.h>
using namespace std;
int numeral(char x)
{
    switch(x)
    {
        case '|':
        case 'I':return 1;
        case 'V':return 5;
        case 'X':return 10;
        case 'L':return 50;
        case 'C':return 100;
        case 'D':return 500;
        case 'M':return 1000;
        default:return 5000;
    }
}
int main()
{
    int t,i,max,index,ans;
    cin>>t;
    string s;
    while(t--)
    {
        int arr[100];
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            arr[i]=numeral(s[i]);
        }
        max=0;
        for(i=0;i<s.size();i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
                index=i;
            }
        }
        ans=0;
        for(i=0;i<s.size();i++)
        {
            if(i+1<s.size()&&arr[i]<arr[i+1])
                arr[i]=-arr[i];
            ans=ans+arr[i];
            //cout<<ans<<endl;
        }
        cout<<ans<<endl;
    }
}
