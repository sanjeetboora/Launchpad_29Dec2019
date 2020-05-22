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
	void dfsHelp(T src, unordered_map<T, bool> &visited, int &vertexCount) {
		
		visited[src] = true;
		vertexCount++;
		for (auto nbr : mp[src])
		{
			if (!visited[nbr]) {
				dfsHelp(nbr, visited, vertexCount);
			}
		}
		return;
	}

	int dfs(int n) {
		unordered_map<T, bool> visited;

		int countries =0;
		int totalPossiblePairs = (n*(n-1))/2;
		int pairsFromSameCountry = 0;

		for (auto vertex : mp)
		{	int astronauts = 0;
			if (!visited[vertex.first]) {
		
				dfsHelp(vertex.first, visited, astronauts);

				pairsFromSameCountry = (astronauts * (astronauts-1))/2;
				totalPossiblePairs -= pairsFromSameCountry;
				countries++;

			} 
		}cout<<countries<<endl;
		return totalPossiblePairs;
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
	graph<int> g;
	int n, p;
	cin>>n>>p;
	while(p--){
		int a, b;
		cin>>a>>b;
		g.addEdge(a,b);
	}

	cout<<g.dfs(n)<<endl;
	

	return 0;
}






