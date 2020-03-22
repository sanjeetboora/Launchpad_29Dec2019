#include <bits/stdc++.h>
using namespace std;

char firstUnique(string str){
	int freq[26] = {0};
	queue<char> q;

	for (int i = 0; i < str.size(); ++i)
	{
		char ch = str[i];
		freq[ch - 'a']++; // freq updated of curr character

		if(freq[ch - 'a'] > 1){//repeated character

			while(!q.empty() && freq[q.front() - 'a']>1){ // queue's front is not unique
				q.pop();
			}
		}
		else{//unique character

			q.push(ch);
		}
	}

	return q.front();
}


int main(int argc, char const *argv[])
{	
	string str = "aabbcdafbg";
	cout<<firstUnique(str)<<endl;
	
	return 0;
}