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
	g.addEdge(0, 2);
	g.addEdge(3, 1);
	g.addEdge(3, 2);
	g.addEdge(2, 4, false);

	g.printList();

	return 0;
}






