#include<bits/stdc++.h>
using namespace std;
vector <string> v;
vector <string> :: iterator it;
void pallindrome(string a,int l,int r,int n)
{
    char temp;
    if(l==r-1)
    {
        v.push_back(a);
        return;
    }
    for(int i=0;i<r-l;i++)
    {
        temp=a[l];
        a[l]=a[l+i];
        a[l+i]=temp;
        pallindrome(a,l+1,r,n);
        temp=a[l];
        a[l]=a[l+i];
        a[l+i]=temp;
    }
}
int main()
{
    int t,i;
    string s;
    char a[6];
    cin>>t;
    while(t--)
    {
        cin>>s;
        for(i=0;i<s.size();i++)
            a[i]=s[i];
        pallindrome(s,0,s.size(),s.size());
        sort(v.begin(),v.end());
        for(it=v.begin();it<v.end();it++)
            cout<<*it<<" ";
        cout<<endl;
        v.clear();
    }
}
