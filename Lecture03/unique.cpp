#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int i = 0,  totalXor = 0;
	int firstNum;
	cin >> firstNum;
	totalXor = firstNum;
	while (i < n - 1) {
		int num;
		cin >> num;
		totalXor = totalXor ^ num;
		//cout<<totalXor<<endl;
		i = i + 1;

	}

	cout << totalXor << endl;
	return 0;
}










