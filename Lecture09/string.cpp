#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string str1;
	cin>>str1;
	cout<<str1<<endl;

	// char ch[10];
	// cin>>ch;
	// cout<<ch<<endl;

	char c1 = str1[2];
	cout<<c1<<endl;
	reverse(str1.begin(), str1.end());
	cout<<str1<<endl;

	return 0;
}