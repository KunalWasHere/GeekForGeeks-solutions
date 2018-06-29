#include<bits/stdc++.h>
using namespace std;
//int arr[101][101];

int main()
{
    int t,i,j,k;
    cin>>t;
    string s;
    while(t--)
    {
        int arr[101][101]={0};
        cin>>s;
        for(i=0;i<s.size();i++)
            arr[i][i]=1;
        for(i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
                arr[i][i+1]=1;
        }
        for(k=2;k<s.size();k++)
        {
            for(i=0;i<s.size()-k;i++)
            {
                j=i+k;
                if(s[i]==s[j]&&arr[i+1][j-1])
                    arr[i][j]=1;
                else
                    arr[i][j]=0;

            }
        }
        int max,index,jindex;
        max=0;
        for(i=0;i<s.size();i++)
        {
            for(j=s.size()-1;j>=0;j--)
            {
                if(arr[i][j])
                {
                    if(j-i+1>max)
                    {
                        max=j-i+1;
                        index=i;
                        jindex=j;
                    }
                }
            }

        }
        //cout<<arr[7][9];
        //cout<<index<<jindex;
        for(i=index;i<=jindex;i++)
            cout<<s[i];
        cout<<endl;
    }
}
