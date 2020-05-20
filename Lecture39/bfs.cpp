#include <bits/stdc++.h>

using namespace std;

class graph
{	int V;
	list<int>* arr; //unweighted graph

public:
	graph(int v) {
		V = v;
		arr = new list<int>[V];
	}

	void addEdge(int x, int y, bool bidirectional = true) {
		arr[x].push_back(y);
		if (bidirectional) {
			arr[y].push_back(x);
		}
	}

	void bfs(int src) {
		bool* visited = new bool[V];
		queue<int> q;

		q.push(src);
		visited[src] = true;

		while (!q.empty()) {
			int frontNode = q.front();
			q.pop();
			cout << frontNode << ", ";
			for (auto nbr : arr[frontNode])
			{
				if (!visited[nbr]) {
					q.push(nbr);
					visited[nbr] = true;
				}
			}
		}
		cout << endl;
	}

	void printList() { //to print adjacency list

		for (int i = 0; i < V; ++i)
		{	cout << i << " -> ";
			for (int nbr : arr[i])
			{
				cout << nbr << ", ";
			}
			cout << endl;
		}

	}
};

int main(int argc, char const *argv[])
{
	graph g(5);
	g.addEdge(0, 1);
	g.addEdge(0, 3);
	g.addEdge(1, 3);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(3, 4);

	g.bfs(0);

	g.printList();


	return 0;
}






