#include <bits/stdc++.h>
using namespace std;
int ans[10];
void stockSpan(int* stocks, int days) {
	stack<int> st;

	for (int i = 0; i < days; ++i)
	{
		int currDayPrice = stocks[i];
		while (!st.empty() and stocks[st.top()] <= currDayPrice) {
			st.pop();
		}
		int greaterValDay = st.empty()? i : st.top();
		ans[i] = i - greaterValDay;
		st.push(i);
	}
}

int main(int argc, char const *argv[])
{
	int stocks[10] = {100, 90, 70, 80, 85, 60, 90};
	int days = 7;

	stockSpan(stocks, days);
	for (int i = 0; i < days; ++i)
	{
		cout<<ans[i]<<", ";
	}
	cout<<endl;


	return 0;
}