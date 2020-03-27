//#jas_khehra
#include<bits/stdc++.h>
using namespace std;
int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    #endif
    long long num;
    int count=0;
    
    cin>>num;
    for(int j=1;j<=num;j++)
    {
    	int n=j;
    	set<int> s;
    while(n%2==0)
    {
    	s.insert(2);

    	n=n/2;
    } 
    for(int i=3;i*i<n;i++)
    {\
    	while(n%i==0)
    	{
    		s.insert(i);
    		n=n/i;

    	}
    }
    if(n>2) s.insert(n);
    if(s.size()==2)
    	count++;

 	
 }
 cout<<count;
    return 0;
}
 