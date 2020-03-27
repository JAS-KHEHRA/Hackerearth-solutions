//#jas_khehra
#include<bits/stdc++.h>
using namespace std;
template <typename T>;
class graphs_1
 {
 	std::map<T key,list<T> > adjlist;
 public:
 	graphs_1();
 	void addedge(T u,T v)
 	{
 		adjlist[u].push_back(v);
 		adjlist[v].push_back(u);
 	}
 	~graphs_1();
 	void printadj()
 	{
 		for(auto row : adjlist)
 		{
 			T key=row.first;
 			cout<<key<<"->";
 			for(T element : row.second)
 			{
 				cout<<element<<",";
 			}
 			cout<<endl;
 		}
 	}

 	
 }; 
int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    #endif 
    graphs_1 g;
    g.addedge("ASR","DELHI");
    g.addedge("")


    return 0;
}
 