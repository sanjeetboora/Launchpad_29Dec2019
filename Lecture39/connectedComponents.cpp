#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class graph
{
	unordered_map<string, list<string> > mp;

public:
	void addEdge(string x, string y, bool bidirectional = true) {
		mp[x].push_back(y);
		if (bidirectional) {
			mp[y].push_back(x);
		}
	}
	void dfsHelp(string src, unordered_map<string, bool> &visited) {
		cout << src << ", ";
		visited[src] = true;
		for (auto nbr : mp[src])
		{
			if (!visited[nbr]) {
				dfsHelp(nbr, visited);
			}
		}
		return;
	}

	void dfs() {
		unordered_map<string, bool> visited;

		for (auto vertex : mp)
		{
			visited[vertex.first] = false;
		}
		int count = 0;
		for (auto vertex : mp)
		{
			if (!visited[vertex.first]) {
				cout << "component " << count << "--->";
				dfsHelp(vertex.first, visited);
				count++;
			} cout << endl;
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
	graph g;
	g.addEdge("A", "B");
	g.addEdge("A", "C");
	g.addEdge("B", "D");
	g.addEdge("B", "C");
	g.addEdge("D", "E");
	g.addEdge("C", "E");

	g.addEdge("H", "I");
	g.addEdge("H", "J");

	g.addEdge("X", "Y");
	g.addEdge("Y", "Z");

	g.dfs();
	cout << endl;
	g.printList();

	return 0;
}






