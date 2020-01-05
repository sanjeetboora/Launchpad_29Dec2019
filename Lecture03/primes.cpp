#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int N;
	cin >> N;

	for (int num = 3; num <= N ; num++)
	{
		int divideby = 2;
		int rootnum = pow(num, 0.5);
		bool isprime = true;
		while (divideby <= rootnum) {

			if (num % divideby == 0) {
				isprime = false;
				cout << num << " is composite" << endl;
				break;
			}

			divideby = divideby + 1;

		}
		if (isprime) {
			cout << num << " is prime" << endl;
		}
	}







	return 0;
}