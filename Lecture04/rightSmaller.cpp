#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int arr[8] = {10,9,5,7,4,6,2,1};

	int max = INT_MIN;
	int count =0;
	for (int i = 7; i >=0; i--)
	{
		if(arr[i] > max){
			cout<<arr[i]<<", ";
			max = arr[i];
			count++;
		}
	}
	cout<<"count "<<count<<endl;
	return 0;
}