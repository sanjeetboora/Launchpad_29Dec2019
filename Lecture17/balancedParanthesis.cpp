#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool balanced(string exp){
	stack<char> st;

	for (int i = 0; i < exp.length(); ++i)
	{
		if(exp[i] == '{' || exp[i] == '(' || exp[i] == '['){
			st.push(exp[i]);
		}
		else if(!st.empty() && exp[i] == '}'){
			if(st.top() == '{'){
				st.pop();
			}
			else{
				return false;
			}
		}
		else if(!st.empty() && exp[i] == ')'){
			if(st.top() == '('){
				st.pop();
			}
			else{
				return false;
			}
		}
		else if(!st.empty() && exp[i] == ']'){
			if(st.top() == '['){
				st.pop();
			}
			else{
				return false;
			}
		}
	}
	return st.empty();

}

int main(int argc, char const *argv[])
{
	string exp = "(a+b)+{(c+d)*{E+f)}+[g+h]";

	if(balanced(exp)){
		cout<<exp<<" is balanced"<<endl;
	}
	else{
		cout<<exp<<" is not balanced"<<endl;
	}


	return 0;
}