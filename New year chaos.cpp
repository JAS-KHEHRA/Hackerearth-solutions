//#jas_khehra
#include<bits/stdc++.h>
using namespace std;
int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    #endif 
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	std::vector<int> v(n+1);
    	for(int i=1;i<=n;i++)
    	{
    		cin>>v[i];
    	}
    	std::vector<int> ref(n+1,0);
    	int ans=0,flag=0;
    	for (int i = 1; i <= n; ++i)
    	{
    		if(v[i]!=i)
    		{
    		   if(v[i]-i>2)
    		   	{
    		   		 flag=1;
    		   	}
    		 //   	else if(v[i]-i<=2 && v[i]-i>0 )
    		 //    {
    		 //   		ref[i]=v[i]-i; 
    		 //   		ans+=ref[i];

    			// }
    		}
    	for (int j = max(0, v[i] - 2); j < i; j++)
            if (v[j] > v[i]) ans++;
    	}
    	
    	if(flag==0)	cout<<ans<<endl;
    	 else cout<<"Too chaotic"<<endl;
	}
    return 0;
}

 