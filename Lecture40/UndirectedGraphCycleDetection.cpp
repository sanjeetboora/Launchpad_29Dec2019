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

	bool dfsHelper(T src, unordered_map<T, bool> &visited, T parent){
		visited[src] = true;
		for(auto nbr:mp[src]){
			if(!visited.count(nbr)){
				if(dfsHelper(nbr, visited, src)){
					return true;//cycle detected
				}
			}
			else if(nbr != parent){ //cycle detected
				return true;
			}
		}
		return false;
	}

	void dfs(T src){
		unordered_map<T, bool> visited;

		if(dfsHelper(src, visited,"")){
			cout<<"cycle exists"<<endl;
		}
		else{
			cout<<"cycle doesn't exists"<<endl;
		
		}
	}
	

	void printList() { //to print adjacency list

		for (auto pr : mp)
		{
			string vertex = pr.first;

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
	graph<string> g;
	g.addEdge("A", "B");
	g.addEdge("A", "C");
	g.addEdge("B", "D");
	//g.addEdge("C", "D");
	g.addEdge("C", "E");
	g.addEdge("E", "F");

	g.dfs("A");
	
	g.printList();

	return 0;
}


// A -- B
// |	 |
// C -- D
// |
// E -- F


