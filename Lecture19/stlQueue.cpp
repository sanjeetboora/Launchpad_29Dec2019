#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	// queue<string> qu;
	// qu.push("abc");
	// qu.push("abc1");
	// qu.push("abc3");
	// qu.push("abc3");
	// qu.push("abc4");

	// cout<<qu.front()<<endl;
	// qu.pop();
	// cout<<qu.front()<<endl;
	// qu.pop();
	// cout<<qu.front()<<endl;
	// qu.pop();
	// cout<<qu.front()<<endl;
	// qu.pop();
	// cout<<qu.front()<<endl;
	// qu.pop();
	// cout<<qu.front()<<endl;
	// qu.pop();

	//qu.max_size();
	deque<string> dq;

	dq.push_back("1");
	dq.push_back("2");
	dq.push_back("3");
	dq.push_front("4");
	dq.push_front("5");
	dq.push_front("6");
//6,5,4,1,2,3
	//for each loop
	for(auto i:dq){
		cout<<i<<",";
	}

	cout<<endl;
	dq.pop_back();
	dq.pop_front();

	for(auto i:dq){
		cout<<i<<",";
	}
	
	cout<<endl;


	return 0;
}



