
#include <bits/stdc++.h>
using namespace std;
#define MAX 100
vector<string> printPath(int m[MAX][MAX], int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;

	int m[100][100];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>m[i][j];
		}
	}

	vector<string> res = printPath(m,n);
	for(int i=0;i<res.size();i++)
	cout<<res[i]<<" ";
	cout<<endl;
}
	return 0;
}



/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The function returns a sorted array of strings which represents
the directions mouse will take to reach the destination.
You are required to complete the below method. */
int visited[MAX][MAX];
vector <string> v;
vector <string> ::iterator it;
char str[100];
void recursion(int m[MAX][MAX],int n,int x,int y,int h)
{
    int i=x;
    int j=y;
    if(i>=n||j>=n)
    return;
    visited[i][j]=1;
    if((x==n-1&&y==n-1))
    {
        //cout<<str<<endl<<i<<j;
        v.push_back(str);
        return;
    }
    if(i!=0&&!visited[i-1][j]&&m[i-1][j])
    {
        str[h]='U';
        recursion(m,n,i-1,j,h+1);
        visited[i-1][j]=0;
    }
    if(i!=n-1&&!visited[i+1][j]&&m[i+1][j])
    {
        str[h]='D';
        recursion(m,n,i+1,j,h+1);
        visited[i+1][j]=0;
    }
    if(j!=0&&!visited[i][j-1]&&m[i][j-1])
    {
        str[h]='L';
        recursion(m,n,i,j-1,h+1);
        visited[i][j-1]=0;
    }
    if(j!=n-1&&!visited[i][j+1]&&m[i][j+1])
    {
        str[h]='R';
        recursion(m,n,i,j+1,h+1);
        visited[i][j+1]=0;
    }
}
vector<string> printPath(int m[MAX][MAX], int n)
{
    int i,j;
    v.clear();
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        visited[i][j]=0;
    }
    recursion(m,n,0,0,0);
    sort(v.begin(),v.end());
    for(it=v.begin();(it+1)!=v.end();it++)
    {
        if(*it==*(it+1))
        v.erase(it);
    }
    return v;
}
