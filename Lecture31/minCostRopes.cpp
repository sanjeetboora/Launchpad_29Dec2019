#include <bits/stdc++.h>
using namespace std;

int costToConnectRopes(int* ropes, int n) {

	priority_queue<int, vector<int>, greater<int> > pq(ropes, ropes + n); //minheap

	int cost = 0;
	while (pq.size()>1) {
		int firstrope = pq.top();
		pq.pop();
		int secondrope = pq.top();
		pq.pop();

		int currCost = firstrope + secondrope;
		cost += currCost;

		pq.push(currCost);

		cout<<firstrope<<", "<<secondrope<<", "<<currCost<<endl;
	}
	return cost;

}



int main(int argc, char const *argv[])
{
	int n = 5;
	int ropes[5] = {2, 3, 4, 6, 7};

	cout<<costToConnectRopes(ropes, n)<<endl;

	return 0;
}