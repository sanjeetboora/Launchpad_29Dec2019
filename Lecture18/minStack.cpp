#include <bits/stdc++.h>
using namespace std;

void minStack(int* arr, int elements){
	stack<int> st;
	stack<int> temp;
	st.push(arr[0]);
	temp.push(arr[0]);
	for (int i = 1; i < 5; ++i)
	{
		st.push(arr[i]);
		if(arr[i] <= temp.top()){
			temp.push(arr[i]);
		}
		else{
			temp.push(temp.top());
		}
	}

	for (int i = 4; i >=0 ; i--)
	{
		cout<<temp.top()<<endl;
		temp.pop();
	}
}

void minStackOptimize(int* arr, int elements){
	stack<int> st;
	stack<int> temp;
	st.push(arr[0]);
	temp.push(arr[0]);
	for (int i = 1; i < 5; ++i)
	{
		st.push(arr[i]);
		if(arr[i] <= temp.top()){
			temp.push(arr[i]);
		}
	}

	for (int i = 4; i >=0 ; i--)
	{
		cout<<temp.top()<<endl;
		if(temp.top() == st.top()){
			temp.pop();
		}
		st.pop();
	}
}

int main(int argc, char const *argv[])
{
	int arr[10] = {2,3,4,1,5};
	int elements = 5;

	//minStack(arr, elements);
	minStackOptimize(arr, elements);


	return 0;
}