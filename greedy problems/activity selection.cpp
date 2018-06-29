#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,start[1001],end[1001],i,min,count;
	vector < pair<int,int> > v;
	vector < pair<int,int> > :: iterator it;
	cin>>t;
	while(t--)
	{
	    count=0;
	    cin>>n;
	    for(i=0;i<n;i++)
	        cin>>start[i];
	   for(i=0;i<n;i++)
	        cin>>end[i];
	   for(i=0;i<n;i++)
	   {
	       v.push_back(make_pair(end[i],start[i]));
	   }
	   sort(v.begin(),v.end());
	   min=0;
	   for(it=v.begin();it<v.end();it++)
	   {
	       if(it->second >= min)
	       {
	           min=it->first;
	           count++;
	       }
	   }
	   cout<<count<<endl;
	   v.clear();
	}
	return 0;
}
