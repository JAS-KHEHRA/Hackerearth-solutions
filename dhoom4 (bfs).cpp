//#jas_khehra
#include<bits/stdc++.h>
using namespace std;
int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    #endif 
    
    long long a ,b ,n;
    cin>>a>>b>>n;
    std::vector<long long> ar(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>ar[i];
    }
    std::vector<long long> vis(100000);
     for(int i=0;i<=100000;i++)
    {
        vis[i]=-1;// nonvisited means -1,it's not possible to make i
    }


    queue<long long> q;

    q.push(a);
    vis[a]=0;
    while(!q.empty())
    {
      int c=q.front();
      q.pop();
      if(c==b)
      {
      	break;
      }
      for (int i = 0; i < n; ++i)
      {
        long long nw = (c*ar[i])%100000;
        if(vis[nw]==-1)
        {
        	q.push(nw);
        	vis[nw]=vis[c]+1;
        }
      }


    }
    cout<<vis[b];
    return 0;
}
 