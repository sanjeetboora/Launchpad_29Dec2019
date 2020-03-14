#include <bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &st, int val){
	if(st.empty()){
		st.push(val);
		return;
	}
	int x = st.top();
	st.pop();
	insertAtBottom(st, val);
	st.push(x);

}

void reverseStack(stack<int> &st){
	if(st.empty()){
		return;
	}
	int val = st.top();
	st.pop();
	reverseStack(st);
	insertAtBottom(st, val);
}

int main(int argc, char const *argv[])
{
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	reverseStack(st);
	cout<<st.top()<<endl;
	st.pop();
	cout<<st.top()<<endl;
	st.pop();
	cout<<st.top()<<endl;
	st.pop();

	return 0;
}




