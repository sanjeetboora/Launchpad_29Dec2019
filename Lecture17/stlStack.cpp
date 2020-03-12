#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	stack<int> st;
	st.push(5);
	st.push(10);
	st.push(15);
	st.push(20);
	cout<<st.top()<<endl;
	st.pop();
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