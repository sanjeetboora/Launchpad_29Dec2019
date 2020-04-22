#include <bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int> > minHeap;
priority_queue<int> maxHeap;

void add(int num) {

	if (!minHeap.empty() and num > minHeap.top()) {
		minHeap.push(num);
	} else {
		maxHeap.push(num);
	}


	if ( fabs(minHeap.size() - maxHeap.size()) > 1 ) {
		if(maxHeap.size() > minHeap.size()){
			minHeap.push(maxHeap.top());
			maxHeap.pop();
		}	
		else{
			maxHeap.push(minHeap.top());
			minHeap.pop();
		}
	}

}

float getMedian(){
	if(maxHeap.size() > minHeap.size()){
		return maxHeap.top();
	}
	else if(maxHeap.size() < minHeap.size()){
		return minHeap.top();
	}
	else{
		return (minHeap.top() + maxHeap.top())/2;
	}
}


int main(int argc, char const *argv[])
{

	int n;
	cin >> n;

	while (n != 0) {
		if (n != -1) {
			add(n);
		}
		else {
			cout << getMedian() << endl;
		}

		cin >> n;
	}

	return 0;
}