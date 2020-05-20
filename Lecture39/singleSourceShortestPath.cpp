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

	void bfs(string src) {
		unordered_map<string, int> distance;
		queue<string> q;

		q.push(src);
		distance[src] = 0;

		while (!q.empty()) {
			string frontNode = q.front();
			q.pop();
			cout << frontNode << ", ";
			for (auto nbr : mp[frontNode])
			{
				if (distance.count(nbr) == 0) {
					q.push(nbr);
					distance[nbr] = distance[frontNode] + 1 ;
				}
			}
		}

		for (auto dist : distance)
		{
			string vertex = dist.first;
			cout << vertex << " -> " << dist.second;

		}
		cout << endl;
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

	g.bfs("A");

	g.printList();

	return 0;
}






