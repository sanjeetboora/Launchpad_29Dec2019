#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Stack
{
	vector<int> v;
	int minimum;
public:

	bool isEmpty() {
		return v.size() == 0;
	}
	void push(int num) {
		if (isEmpty()) {
			minimum = num;
			v.push_back(num);
		}
		if (num < minimum) {
			v.push_back(2 * num - minimum);
			minimum = num;
		}
		else {
			v.push_back(num);
		}

	}
	int top() {
		if (isEmpty()) {
			cout << "stack is empty" << endl;
			return 0;
		}
		int t =  v[v.size() - 1];
		if (t < minimum) {
			t = minimum;
		}

		return t;
	}
	void pop() {
		if (isEmpty()) {
			cout << "stack is empty" << endl;
			return;
		}
		int topEle = v[v.size() - 1];
		if (topEle < minimum) {
			minimum = 2 * minimum - topEle;
		}
		v.pop_back();
	}
	int getMin() {
		return minimum;
	}

};

int main(int argc, char const *argv[])
{
	Stack st;
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(1);
	st.push(5);
	st.push(-1);
	st.push(4);
	cout << st.top() << " " << st.getMin() << endl;
	st.pop();
	cout << st.top() << " " << st.getMin() << endl;
	st.pop();
	cout << st.top() << " " << st.getMin() << endl;
	st.pop();
	cout << st.top() << " " << st.getMin() << endl;
	st.pop();
	cout << st.top() << " " << st.getMin() << endl;
	st.pop();
	cout << st.top() << " " << st.getMin() << endl;
	st.pop();
	cout << st.top() << " " << st.getMin() << endl;
	st.pop();

	return 0;
}














