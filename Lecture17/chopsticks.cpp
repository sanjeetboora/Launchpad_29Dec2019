//https://www.codechef.com/problems/TACHSTCK
#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	long long int D;
	cin>>D;
	long long int* arr = new long long int[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	sort(arr, arr+n);
	int numberOfPairs =0;

	for (int i = 0; i < n-1; ++i)
	{
		if((arr[i+1] - arr[i]) <= D){
			numberOfPairs++;
			i+=1;
		}
	}
	cout<<numberOfPairs<<endl;


	return 0;
}



















