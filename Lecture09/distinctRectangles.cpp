#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int count =0;
	for (int length = 1; length*length <= n; length++)
	{
		for (int height = length; height*length <= n; height++)
		{	
			cout<<length<<", "<<height<<endl;
			count++;
		}
	}
	cout<<"distinct rectangles: "<<count<<endl;


}