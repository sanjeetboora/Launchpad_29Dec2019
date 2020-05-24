#include <bits/stdc++.h>
using namespace std;

class graph
{
	int V;
	int connectedComponents;
	vector<int> parent;
public:
	graph(int n) {
		V = n;
		connectedComponents = n;
		parent.reserve(n);
		for (int i = 0; i < V; ++i)
		{
			parent[i] = i;
		}
	}

	int getSuperParent(int x) {
		if (parent[x] == x) {
			return x;
		}
		else {
			parent [x] = getSuperParent(parent[x]);
			return parent[x];
		}

	}

	void unite(int u, int v) {
		int parU = getSuperParent(u);
		int parV = getSuperParent(v);

		if (parU != parV) {
			parent[parU] = parV;
			connectedComponents--;
		}
	}


};


int main(int argc, char const *argv[])
{
	int n = 4;
	graph g(4);

	vector<pair<int, int> >edges;
	edges.push_back(make_pair(0, 1));
	edges.push_back(make_pair(1, 2));
	//edges.push_back(make_pair(2, 0));
	edges.push_back(make_pair(2, 3));
	bool cycle = false;
	for (int i = 0; i < edges.size(); ++i)
	{
		int x = edges[i].first;
		int y = edges[i].second;

		if (g.getSuperParent(x) != g.getSuperParent(y)) {
			g.unite(x, y);
		}
		else {
			cycle = true;
			cout << "cycle exists " << x << ", " << y << endl;
		}
	}

	if (cycle) {
		cout << "this is a cyclic graph" << endl;
	}
	else {
		cout << "this is an acyclic graph" << endl;
	}


	return 0;
}





