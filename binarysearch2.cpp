//#jas_khehra
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()

{

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
	freopen("out.txt","W", stdout);


    #endif
    ll t; 
    cin>>t;
    while(t--)
    {
    	ll d,a,m,b,x;
    	cin>> d >> a >> m >> b >> x;
 		ll temp= (a*m)+b; 
		ll j= (x-d)/temp;
 		temp=(x-d)%temp;
 		ll l=0,h=m+1,mid;
 		while(l<=h)
 		{
 			mid= (l+h-1)/2;
 			if(a*mid >=temp)
 			{
 				if(a*(mid-1)<temp)
 					break;
 				else if(temp==0)
 				{
 					mid==0;
 					break;
 				}
 				else h=mid-1;
 			}
 			else l=mid+1;

 		}
        cout<<j*(m+1)+mid;





    }


    return 0;
}
 