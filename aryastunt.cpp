//#jas_khehra
#include<bits/stdc++.h>
using namespace std;
std::vector<int> v[10009];
std::vector<int> sol(10000);
int s;
int min_index;
std::vector<bool> vis(10009,false);
void dfs(int node)
{
	vis[node]=true;
	if(s<sol[node])
	{
		s=sol[node];
		min_index=node;
	}
	else if(s==sol[node])
	{
		if(min_index>node)
			min_index=node;
	}
	for (auto child:v[node])
	{
		/* code */if(vis[child]==false)
		dfs(child);
	}
}
int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    #endif
    int n,m;
    cin>>n>>m;
    
int total=0;
    for (int i = 1; i <= n; ++i)
    {
    	cin>>sol[i];
    	total+=sol[i];
    }

    for(int i=0;i<n;i++)
    {
    	int x,y;
    	cin>>x>>y;
    	v[x].push_back(y);
    	v[y].push_back(x);
	}
	

	std::vector<int> tent_id;
	int killed=0;
	for (int i = 1; i <= n; ++i)
	 {
	 	min_index=1e7;
			s=-1;
		if(vis[i]==false)
		 	{
		 		dfs(i);
		 		killed+=s;
		 		tent_id.push_back(min_index);

	 	}
	 }
	 cout<<killed<<" "<< total-killed<<endl;
	 sort(tent_id.begin(), tent_id.end());
	 for(auto x:tent_id)
	 	cout<<x<<" ";

    return 0;
}
 