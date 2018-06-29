
#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e4 + 5;
int spanningTree(vector <pair<int,int> > g[], int n);
int main()
{
	int t ;
	cin>>t;
	while(t--)
	{
	vector <pair<int,int> > adj[MAX];
    int n,e;
    int w, mC;
    cin >> n>> e;
    for(int i = 0;i < e;++i)
    {
    	int x,y;
        cin >> x >> y >> w;
        adj[x].push_back({w, y});
        adj[y].push_back({w, x});
    }

    mC= spanningTree(adj, MAX);
    cout << mC << endl;
	}
    return 0;
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Finds the sum of weights of the edges of the Minimum Spanning Tree.
    Graph is represented as adjacency list using array of vectors.  MAX
    is an upper  limit on number of vertices.
   g[u] represents adjacency list of vertex u,  Every element of this list
   is a pair<w,v>  where v is another vertex and w is weight of edge (u, v)
  Note : Vertex numbers start with 1 and don't need to be contiguous.   */
int spanningTree(vector <pair<int,int> > g[], int MAX)
{
	vector <pair<int,int> > :: iterator it;
	int arr[10005]={0},vertex,min,set,i,ans=0;
	i=1;
	set=1;
	for(i=1;i<MAX;i++)
	{
	    if(arr[i])
	        continue;
	   // arr[i]=1;
	   start:;
	    min=INT_MAX;
	    for(it=g[i].begin();it<g[i].end();it++)
	    {
	        if((arr[it->second]!=1||arr[i]!=1)&&it->first<min)
	        {
	            min=it->first;
	            vertex=it->second;
	        }
	    }
	    arr[i]=1;
	    if(min==INT_MAX)
	    {
	        continue;
	    }
	    ans=ans+min;
	    arr[vertex]=1;
	    i=vertex;
	    cout<<endl<<"hi"<<ans;
	    goto start;
	}
	 return ans;
}
