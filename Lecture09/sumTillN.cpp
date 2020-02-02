#include <bits/stdc++.h>
using namespace std;
int sum(int n){
	//base case
	if(n==0){
		return 0;
	}

	int ans = n + sum(n-1);//recursive call
	return ans;
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int result = sum(n);
	cout<<result<<endl;
	return 0;
}

















