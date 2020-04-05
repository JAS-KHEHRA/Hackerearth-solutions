//#jas_khehra
#include<bits/stdc++.h>
using namespace std;
int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    #endif
    string s;
    cin>>s;
    vector<int> a(26);
    unordered_set<int> b;

    for(int i=0;i<s.size();i++)
    {
         a[s[i]-97]++;

    }
    sort(a.begin(),a.end(),greater<int>());
    int flag=0;
	if(a[0]-a[1]==0 || a[0]-a[1]==1)
    	flag=0;
    else flag=1;
    
    for(int i=2;i<26;i++)
    {
   		if(a[i]!=0 && flag==0)
     	{
     		if(a[i]==a[i-1])
     			flag=0;
     		
     		else 
     			{
     			flag=1;
     			break;
     			}

     	}
    	
    }
    if(a[0]==a[1] && flag==1)
    {
    	int count=0;
    	for(int i=0;i<26;i++)
    		{
    			if(a[i]==1)
    				count++;

    		}
    		if (count==1)
    			flag=0;
    		
    }
  

    if(flag==1)
    {
    	cout<<"NO"<<endl;
    }
    else cout<<"YES";

    return 0;
}
 