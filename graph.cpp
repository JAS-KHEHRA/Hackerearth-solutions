//#jas_khehra
#include<bits/stdc++.h>
using namespace std;
class graph
{
	int V;
	list<int> *adjlist;
	public:
	graph(int v)
	{
		V=v;
		adjlist= new list<int>[V];

	}
	public:
		void addedge(int u,int v,bool bidir=true)
	{
		adjlist[u].push_back(v);
		if(bidir)
		{
			adjlist[v].push_back(u);
		}
	}

	public:
		void printlist()
	{
		for(int i=0;i <V;i++)
			{
				cout<<i<<"->";
				for(int q:adjlist[i]){
					cout<<q<<" "; 
				}
				cout<<endl;
			}
	}
	public:
		void bfs(int src)
		{
			queue<int> q;

			q.push(src);
			int *dist=new int [V+1]{0};
			bool *vis=new bool[V]{0};
			vis[src]=true;
			while(!q.empty())
			{
				int node=q.front();
				cout<<node<<" ";
				q.pop();
				for(int i:adjlist[node])
				{
					if(!vis[i])
					{
						q.push(i);
						vis[i]=true;
						dist[i]=dist[node]+1;
					}
				}
			}
			cout<<endl;
			for (int i = 0; i < V; ++i)
			{
				/* code */cout<<dist[i]<<" ";
			}

		}


};
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    #endif 
    graph g(4);
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(0,3);
    g.addedge(1,2);
    g.addedge(1,3);
 	g.printlist();
 	g.bfs(0);
    return 0;
}
 