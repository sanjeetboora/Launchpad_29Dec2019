#include <bits/stdc++.h>
using namespace std;

void printMaxinKSizeSubarray(int *arr, int n, int k){
	deque<int> dq(k);

	int i;
	//for first k elements
	for (i = 0; i < k; ++i)
	{
		while( !dq.empty() && arr[i] >= arr[dq.back()]){
			dq.pop_back();
		}
		dq.push_back(i);
	}

	// i >= k then we will check if dq.front exists in current window

	for ( i = k; i < n; ++i)
	{	
		cout<<arr[dq.front()]<<endl; //max of k elements
		while( !dq.empty() && dq.front() <= i-k){ //all index of earlier windows will be removed
			dq.pop_front();
		}
		// remove all smaller elements of current window
		while( !dq.empty() && arr[i] >= arr[dq.back()]){
			dq.pop_back();
		}
		dq.push_back(i);
	}
	cout<<arr[dq.front()]<<endl;// print the max of last k size window

}


int main(int argc, char const *argv[])
{
	int arr[10] = {10,1,8,0,6,9,15};
	int n = 7;
	int k =3;

	printMaxinKSizeSubarray(arr, n, k);
	return 0;
}





