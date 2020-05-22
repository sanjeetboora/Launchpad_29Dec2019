#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

template<typename T>

class graph
{	unordered_map<T, list<T> >mp;
public:
	void addEdge(T x, T y) {
		mp[x].push_back(y);
	}

	void bfs(){
		unordered_map<T, int> indegree;
		list<T> ans;

		for(auto v:mp){
			indegree[v.first] = 0; 
		}
		for(auto v:mp){
			for(T nbr: v.second){
				indegree[nbr]++;
			} 
		}

		queue<T> q;
		for(auto v:mp){
			if(indegree[v.first] == 0){
				q.push(v.first);
			}
		}

		while(!q.empty()){
			T frontNode = q.front();
			ans.push_back(frontNode);
			q.pop();

			for(T nbr: mp[frontNode]){
				indegree[nbr]--;
				if(indegree[nbr] == 0){
					q.push(nbr);
				}
			}
		}

		for (string ele:ans)
		{
			cout<<ele<<", ";
		}
		cout<<endl;
	}
	
	
};

int main(int argc, char const *argv[])
{
	graph<string> g;
	g.addEdge("10", "diploma");
	g.addEdge("10", "11");
	g.addEdge("11", "12");
	g.addEdge("12", "drop");
	g.addEdge("12", "JEE");
	g.addEdge("12", "DU");
	g.addEdge("drop", "JEE");
	g.addEdge("JEE", "B.Tech");
	g.addEdge("JEE", "B.E.");
	g.addEdge("diploma", "B.Tech");
	g.addEdge("extraordinary", "B.Tech");

	g.bfs();




	return 0;
}







