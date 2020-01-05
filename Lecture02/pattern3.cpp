#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{

	int N;
	cin >> N;
	int val = 1;
	for (int row = 1; row <= N; row = row + 1)
	{

		for (int col = 1; col <= row ; col = col + 1)
		{
			cout << val << " ";
			val = val + 1;
		}
		//cout<<row<<endl;
		cout << endl;
	}




	return 0;
}