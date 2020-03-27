//#jas_khehra
#include<bits/stdc++.h>
using namespace std;
std::vector<int> vi[1001];
std::vector<bool> vis(1001,false);
std::vector<int> parent(1001,-1);
std::vector<int> path;
void bfs(int src,int des)
{
	queue<int> q;
	q.push(src);
	vis[src]=true;
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		for(auto i:vi[node])
		{
			if(!vis[i])
			{
				vis[i]=true;
				q.push(i);
				if(i==des)return;
				parent[i]=node;

			}
		}

	}
	
}

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    #endif
     int n,m,t,c;
     cin>>n>>m>>t>>c;
     while(m--)
     {
     	int u,v;
     	cin>>u>>v;
     	vi[u].push_back(v);
     	vi[v].push_back(u);
	}
	for (int i = 0; i < n; ++i)
	{
		sort(vi[i].begin(), vi[i].end());
	}
	int x,y;
	cin>>x>>y;
	std::vector<int> ans;
	bfs(x,y);
	ans.push_back(y);
 	int s=parent[y];
 	int cnt=1;
 	while(s!=x)
 	{
 		ans.push_back(s);
 		s=parent[s];
 		cnt++;
 	}
 	ans.push_back(x);

	
	cout<<cnt<<endl;
	for (int i = ans.size()-1; i >=0 ; i--)
	{
		/* code */cout<<ans[i]<<" ";
	}

    return 0;
}
 