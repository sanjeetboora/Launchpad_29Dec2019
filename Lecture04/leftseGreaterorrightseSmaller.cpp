#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int arr[8] = {2,5,6,4,9,11,10,12};

	int leftMax[8];
	int rightMin[8];
	leftMax[0] = INT_MIN;
	for (int i = 1; i < 8; ++i)
	{
		leftMax[i] = max(arr[i-1], leftMax[i-1]);
	}

	rightMin[7]=INT_MAX;
	for (int i = 6; i >=0; i--)
	{
		rightMin[i] = min(arr[i+1], rightMin[i+1]);
	}

	for (int i = 0; i < 8; ++i)
	{
		if(arr[i] > leftMax[i] and arr[i]<rightMin[i]){
			cout<<arr[i]<<", ";
		}
	}

	return 0;
}









