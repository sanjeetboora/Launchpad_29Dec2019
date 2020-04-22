#include <bits/stdc++.h>
using namespace std;

void printHeap(priority_queue<int, vector<int>, greater<int> > pq){
	while(!pq.empty()){
		cout<<pq.top()<<", ";
		pq.pop();
	}
	cout<<endl;
}

void topKelements(int k){
	priority_queue<int, vector<int>, greater<int> > pq; //minheap
	int n;
	cin>>n;

	// while(scanf("%d", &n) != EOF){

	// }
	int currSizeHeap = 0;
	while(n != -1000){
		if(n != -1){
			if(currSizeHeap <k){
				pq.push(n);
				currSizeHeap++;
			}
			else if(pq.top() < n){
				pq.pop();
				pq.push(n);
			}
		}
		else{
			//print the heap
			printHeap(pq);
		}
		cin>>n;
	}

}


int main(int argc, char const *argv[])
{	
	int k;
	cin>>k;
	topKelements(k);
	return 0;
}