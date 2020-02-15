#include <iostream>
using namespace std;
int ways(int n){
	if(n <= 2){
		return n;
	}

	int single = ways(n-1);
	int pair = (n-1)* ways(n-2);

	int result = single + pair;
	return result;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	cout<<ways(n)<<endl;
	return 0;
}






