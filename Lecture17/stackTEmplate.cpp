#include <bits/stdc++.h>
#include <vector>
using namespace std;

// template<typename T, typename U>
template<typename T>
class Stack
{
	vector<T> v;
public:
	
	bool isEmpty(){
		return v.size() == 0;
	}
	void push(T num){
		v.push_back(num);
	}

	void pop(){
		v.pop_back();
	}

	T top(){
		if(isEmpty()){
			cout<<"stack is empty"<<endl;
			return NULL;
		}
		return v[v.size()-1];
	}
};

int main(int argc, char const *argv[])
{
	//Stack<int, int> st;
	Stack<int> st;
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














