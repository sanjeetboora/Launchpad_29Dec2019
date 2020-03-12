#include <bits/stdc++.h>
#include <vector>
using namespace std;

void reverse(stack<int> &stA){
	stack<int> stB;
	stack<int> stC;
	//transfer all elements from A to B
	while(!stA.empty()){
		stB.push(stA.top());
		stA.pop();
	}
	//transfer all elements from B to C
	while(!stB.empty()){
		stC.push(stB.top());
		stB.pop();
	}
	//transfer all elements from C to A
	while(!stC.empty()){
		stA.push(stC.top());
		stC.pop();
	}
}

int main(int argc, char const *argv[])
{
	stack<int> st;
	st.push(5);
	st.push(10);
	st.push(15);
	st.push(20);
	reverse(st);
	cout<<st.top()<<endl;
	st.pop();
	cout<<st.top()<<endl;
	st.pop();
	cout<<st.top()<<endl;
	st.pop();
	cout<<st.top()<<endl;
	st.pop();

	return 0;
}