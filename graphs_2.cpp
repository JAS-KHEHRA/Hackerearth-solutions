 //#jas_khehra
 #include<bits/stdc++.h>
 using namespace std;
 template<typename T>
 class graph
 {
 	map< T,list<T> > adjlist;
	public:
 		graph()
 		{
 		}
 		void addedge(T u,T v, bool bidir=true)
		{
			adjlist[u].push_back(v);
			if(bidir){
				adjlist[v].push_back(u);
			}
 		}
 		void print()
 		{
 			for(auto it:adjlist)
 			{
 				T key=it.first;
 				cout<<key<<"->";
 				for(auto row: it.second)
 				{
 					cout<<row<<" ";
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
     graph <string>g;
     g.addedge("amritsar","delhi");
     g.addedge("amritsar","agra");
     g.addedge("surrey","lucknow");
     g.addedge("surrey","delhi");
     g.print();
     return 0;
 }
  