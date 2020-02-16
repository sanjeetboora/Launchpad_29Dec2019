#include<iostream>
using namespace std;

void generateParentheses(int n,int open,int close,string str){

	if(close == n){
		cout<<str<<endl;
		return;
	}

	if(open > close){
		generateParentheses(n, open, close+1, str+")");
	}
	if(open < n){
		generateParentheses(n, open+1, close, str+"(");
	}
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	generateParentheses(n,0,0,"");
	return 0;
}