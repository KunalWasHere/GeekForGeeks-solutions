#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,start[101],end[101],i,min,count;
	vector < pair<int,int> > v;
	vector < pair<int,int> > :: iterator it;
	vector < pair<int,int> > a;
	vector < pair<int,int> > :: iterator w;
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
	       count++;
	       if(it->second >= min)
	       {
	           min=it->first;
	           a.push_back(make_pair(it->second,it->first));
	       }
	   }
	   for(w=a.begin();w<a.end();w++)
	   {
	       for(i=0;i<n;i++)
	       {
	           if(w->first==start[i]&&w->second==end[i])
	                cout<<i+1<<" ";
	       }
	   }
	   cout<<endl;
	   v.clear();
	   a.clear();
	}
	return 0;
}
