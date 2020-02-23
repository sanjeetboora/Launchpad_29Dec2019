#include<iostream>
using namespace std;
bool isPossible(int* stalls, int N, int C, int mindiff){
	C--; // first cow is placed at 0th stall
	int lastCowPlacedAt =0;
	for (int i = 1; i <N ; ++i)
	{	int diff = stalls[i] - stalls[lastCowPlacedAt];
		if(diff >= mindiff){
			lastCowPlacedAt = i;
			C--;
		}
		if(C <= 0){
			return true;
		}
	}
	if(C>0){
		return false;
	}
}

int aggCows(int N, int C, int* stalls) {

	sort(stalls, stalls + N);
	int ans =0;
	int minRange = 0, maxRange = stalls[N - 1] - stalls[0];

	while (minRange <= maxRange) {
		int mid = minRange + (maxRange - minRange) / 2;
		if(isPossible(stalls, N, C, mid)){
			ans = mid;
			minRange = mid+1;
		}
		else{
			maxRange = mid-1;
		}

	}
	return ans;
}
int main(int argc, char const *argv[])
{
	int N, C;
	cin>>N>>C;
	int* stalls = new int[N];
	for (int i = 0; i < N; ++i)
	{
		cin >> stalls[i];
	}

	int maxdiff = aggCows(N, C, stalls);
	cout<<maxdiff<<endl;



	return 0;
}