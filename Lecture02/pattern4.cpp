#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	
	int N;
	cin>>N;
	int val =1;
	for (int row = 1; row <= N; row=row+1)
	{	
		if(row%2 == 0){
			val =0;
		}
		else{
			val =1;
		}
		
		for (int col = 1; col <= row ; col=col+1)
		{
			cout<<val<<" ";
			val = !val;
		}
		//cout<<row<<endl;
		cout<<endl;
	}




	return 0;
}