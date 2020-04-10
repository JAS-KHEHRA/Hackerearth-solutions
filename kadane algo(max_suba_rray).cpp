//#jas_khehra
#include<bits/stdc++.h>
using namespace std;
int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    #endif
    int n;
    cin>>n; 
    std::vector<int> v(n);
    for(int i=0;i<n;i++)
    {
    	cin>>v[i];
    } 
    int ans,a=0;
    for(int i:v)
    {
    	a+=i;
    	ans=max(a,ans);
    	a=max(a,0);

    }
    cout<<ans;
    return 0;
}
 