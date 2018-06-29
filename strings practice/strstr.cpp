
#include<bits/stdc++.h>
using namespace std;
int strstr(string ,string);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        cin>>a;
        cin>>b;
        cout<<strstr(a,b)<<endl;
    }
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The function should return position where the target string
   matches the string str
Your are required to complete this method */
int strstr(string s, string x)
{
     //Your code here
     int p[1001]={0},i,j;
     j=0;i=1;
     while(i<x.size())
     {
         if(x[i]==x[j])
        {
            p[i]=j+1;
            i++;
            j++;
        }
        else
        {
            if(j==0)
            i++;
            else
            j=p[j-1];
        }
     }
     j=0;
     i=0;
     while(i<s.size())
     {
         if(j==x.size())
            return i-j;
         if(s[i]==x[j])
         {
             j++;
             i++;
             //cout<<"eq";
         }
         else
         {
             //cout<<j;cout<<i<<" ";
             if(j==0)
             i++;
             else
             j=p[j-1];
             //cout<<"el";
         }
     }//cout<<"hi";
    if(j==x.size())
    return i-j;
     return -1;
}
