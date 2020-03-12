#include <iostream>
#include <vector>
using namespace std;
long long int minPrice(int* cost, int* petrol, int checkPoints) {
	long long int minimumPrice = cost[0];
	long long int totalMoneySpent = minimumPrice * petrol[0];

	for (int i = 1; i < checkPoints ; ++i)
	{
		if (cost[i] < minimumPrice) {
			minimumPrice = cost[i];
		}
		totalMoneySpent += (petrol[i] * minimumPrice);

	}
	return totalMoneySpent;
}



int main(int argc, char const *argv[])
{

	int testcases;
	cin >> testcases;
	while (testcases-- > 0) {
		int checkPoints;
		cin >> checkPoints;
		int* cost = new int[checkPoints];
		int* petrol = new int[checkPoints];
		for (int i = 0; i < checkPoints; ++i)
		{
			cin>>cost[i];
		}
		for (int i = 0; i < checkPoints; ++i)
		{
			cin>>petrol[i];
		}
		cout << minPrice(cost, petrol, checkPoints) << endl;

	}
	return 0;
}