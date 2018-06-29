#include<bits/stdc++.h>
using namespace std;
vector <char> v;
vector <char> :: iterator it;
void duplicate()
{
    int set=0,iset=0;
    for(it=v.begin();it<v.end();it++)
    {
        while(it+1<v.end()&&*it==*(it+1))
        {
            v.erase(it);
            set=1;
            //it++;
        }
        if(set)
            {v.erase(it);set=0;iset=1;}
    }
    if(iset)
        duplicate();
    else
        return;

}
int main()
{
   int t,i;
   cin>>t;
   while(t--)
   {
       string s;
       cin>>s;
       for(i=0;i<s.size();i++)
       {
           v.push_back(s[i]);
       }
       duplicate();
       for(it=v.begin();it<v.end();it++)
        cout<<*it;
       cout<<endl;
       v.clear();
   }
}
