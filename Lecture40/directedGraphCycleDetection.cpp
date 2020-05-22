#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

template<typename T>
class graph
{
	unordered_map<T, list<T> > mp;

public:
	void addEdge(T x, T y, bool bidirectional = true) {
		mp[x].push_back(y);
		if (bidirectional) {
			mp[y].push_back(x);
		}
	}

	bool dfsHelper(T src, unordered_map<T, bool> &visited, vector<bool> &path){
		visited[src] = true;
		path[src] = true;
		for(auto nbr:mp[src]){
			if(path[nbr]){
				return true;
			}
			if(!visited.count(nbr)){
				if(dfsHelper(nbr, visited, path)){
					return true;//cycle detected
				}
			}
			
		}
		path[src] =false;
		return false;
	}

	void dfs(T src){
		unordered_map<T, bool> visited;
		vector<bool> path;
		path.reserve(100);
		for (int i = 0; i < 10; ++i)
		{
			path[i] = false;
		}
		
		if(dfsHelper(src, visited,path)){
			cout<<"cycle exists"<<endl;
		}
		else{
			cout<<"cycle doesn't exists"<<endl;
		
		}
	}
	

	void printList() { //to print adjacency list

		for (auto pr : mp)
		{
			T vertex = pr.first;

			cout << vertex << " --> ";
			for (auto nbr : pr.second)
			{
				cout << nbr << ", ";
			}

			cout << endl;
		}

	}
};

int main(int argc, char const *argv[])
{
	graph<int> g;
	g.addEdge(1, 2, false);
	g.addEdge(1, 3, false);
	g.addEdge(2, 4, false);
	g.addEdge(3, 5, false);
	g.addEdge(5, 6, false);
	//g.addEdge(6, 3, false);
	

	g.dfs(1);
	
	g.printList();

	return 0;
}


// 1 -> 2
// |	 |
// 3	 4
// |
// 5-> 6

