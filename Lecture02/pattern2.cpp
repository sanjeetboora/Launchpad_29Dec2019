#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	
	int N;
	cin>>N;

	for (int row = 1; row <= N; row=row+1)
	{
		
		for (int col = 1; col <= row ; col=col+1)
		{
			cout<<col <<" ";
		}
		//cout<<row<<endl;
		cout<<endl;
	}




	return 0;
}