//#jas_khehra
#include<bits/stdc++.h>
using namespace std;

std::vector<int> vc[20001];
int visited[1001]={0};

void dfs(int s , int length)
{
	visited[s]=length;
	for(int i=0 ; i<vc[s].size() ; i++)
	{
		if(visited[vc[s][i]]==0)
			{
				dfs(vc[s][i],length+1);
			}
	}
}



int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    #endif 
    int n;
    cin>>n;
    int z=n-1,u,v;
    while(z--)
    {
    	cin>>u>>v;
    	vc[u].push_back(v);
    	vc[v].push_back(u);

    }
    int length=1;
    dfs(1,length);
    int q;
    cin>>q;
    int min=INT_MAX;
    int minnum;
    while(q-- >0)
    {
    	int x;
    	cin>>x;
    	if(min > visited[x])
           {min= visited[x];
           minnum=x;
       }

    }
    cout<<minnum;
    return 0;
}
 