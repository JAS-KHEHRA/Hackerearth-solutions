//#jas_khehra
#include<bits/stdc++.h>
using namespace std;
int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    #endif
    int m ,n;
    cin>>m>>n;
      int grid[m][n];
        grid[0][0]=0;
        for(int i=1;i<n;i++)
        {
            grid[0][i]=1;
        }
        for(int i=1;i<m;i++)
        {
            grid[i][0]=1;
        }
        for(int i=1;i<m;i++)
            {
                for(int j=1;j<n;j++)
                {
                    grid[i][j]=grid[i-1][j]+grid[i][j-1];
              //      cout<<grid[i][j]<<" ";
                }
                //cout<<endl;
            }
           cout<<grid[m-1][n-1];
            
    return 0;
}
 