#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class graph
{	int vertices;
	unordered_map<int, list<pair<int, int> > > mp;//weighted graph
//unordered_map<vertex, list<pair<_neighbour_vertex, weight> > >
public:
	graph(int v) {
		vertices = v;
	}

	void addEdge(int x, int y, int weight, bool bidirectional = true) {
		mp[x].push_back(make_pair(y, weight));
		if (bidirectional) {
			mp[y].push_back(make_pair(x, weight));
		}
	}


	void dijkstra(int src) {
		set<pair<int, int> >disSet;
		unordered_map<int, int> distance;

		for (auto vr : mp) {
			distance[vr.first] = INT_MAX;
		}
		distance[src] = 0;

		disSet.insert(make_pair(distance[src], src));

		while ( !disSet.empty()) {
			auto minDisNode = *(disSet.begin());

			int node = minDisNode.second;
			int nodeDis = minDisNode.first;

			disSet.erase(disSet.begin());

			for (auto nbr : mp[node]) {
				if ((nbr.second + nodeDis) < distance[nbr.first]) {
					auto findInSet = disSet.find(make_pair(distance[nbr.first], nbr.first));
					if (findInSet != disSet.end()) { //nbr found in disSet
						disSet.erase(findInSet);
					}
					distance[nbr.first] = nbr.second + nodeDis;
					disSet.insert(make_pair(distance[nbr.first], nbr.first));
				}
			}
		}

		for (auto vr : distance) {
			cout << vr.first << ", " << vr.second << endl;
		}

	}


};


int main(int argc, char const *argv[])
{
	graph g(5);

	g.addEdge(0, 1, 2);
	g.addEdge(1, 2, 2);
	g.addEdge(2, 3, 2);
	g.addEdge(0, 3, 7);
	g.addEdge(0, 2, 5);
	g.addEdge(3, 4, 3);

	g.dijkstra(0);


	return 0;
}





