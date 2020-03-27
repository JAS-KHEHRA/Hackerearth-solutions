//#jas_khehra
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    #endif
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,a,b,c,f,ans=-1;
    	cin>>n>>a>>b>>c;
    	cin>>f;
    	ans= abs(a-f)+abs(b-f)+c;
    	n--;
    	while(n--)
    	{
    		cin>>f;
    		ans=min(ans,abs(a-f)+abs(b-f)+c);
    	}
    	cout<<ans<<endl;
    	
    	

    }


    return 0;
}
 