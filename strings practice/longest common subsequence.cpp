#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,p[101]={0},i,j,count,max,k;
        cin>>x>>y;
        string s1,s2;
        if(x>y)
            cin>>s1>>s2;
        else
            cin>>s2>>s1;
        i=1;j=0;
        while(i<s2.size())
        {
            if(j==0)
            {
                if(s2[i]==s2[j])
                {
                    p[i]=1;
                    i++;
                    j++;
                }
                else
                {
                    p[i]=0;
                    i++;
                }
            }
            else
            {
                if(s2[i]==s2[j])
                {
                    p[i]=j+1;
                    i++;
                    j++;
                }
                else
                {
                    j=p[j];
                }
            }
        }
        i=0;
        j=0;
        count=0;
        max=0;
        for(k=0;k<s2.size();k++)
        {
            j=k;
            i=0;
            while(i<s1.size()&&j<s2.size())
        {
            if(s1[i]==s2[j])
            {
                count=j-k+1;
                if(count>max)
                    max=count;
                j++;
                i++;
            }
            else
            {
                if(j==k)
                    i++;
                else
                j=p[j-1];
                if(j<k)
                    j=k;
            }
        }
        if(max!=0)
            k=k+max-1;}
        cout<<max<<endl;
    }
}
