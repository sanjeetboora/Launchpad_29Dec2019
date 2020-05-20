#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class graph
{
	unordered_map<int, list<pair<int, int> > > mp;//weighted graph
//unordered_map<vertex, list<pair<_neighbour_vertex, weight> > >
public:
	void addEdge(int x, int y, int weight, bool bidirectional = true) {
		mp[x].push_back(make_pair(y, weight));
		if (bidirectional) {
			mp[y].push_back(make_pair(x, weight));
		}
	}

	void printList() { //to print adjacency list

		for (auto pr : mp)
		{
			int vertex = pr.first;
			list<pair<int, int> > neighbours = pr.second;
			cout << vertex << " --> ";
			for (auto nbr : neighbours)
			{
				int nbr_vertex = nbr.first;
				int nbr_weight = nbr.second;
				cout << "{ " << nbr_vertex << ", " << nbr_weight << " } ";
			}
			cout << endl;
		}

	}
};

int main(int argc, char const *argv[])
{
	graph g;
	g.addEdge(0, 1, 10);
	g.addEdge(0, 2, 20);
	g.addEdge(3, 1, 5, false);
	g.addEdge(3, 2, 7);
	g.addEdge(2, 4, 30, false);

	g.printList();

	return 0;
}






