#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Stack
{
	vector<int> v;
public:
	
	bool isEmpty(){
		return v.size() == 0;
	}
	void push(int num){
		v.push_back(num);
	}

	void pop(){
		v.pop_back();
	}

	int top(){
		if(isEmpty()){
			cout<<"stack is empty"<<endl;
			return 0;
		}
		return v[v.size()-1];
	}
};

int main(int argc, char const *argv[])
{
	Stack st;
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














