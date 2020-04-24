#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main(int argc, char const *argv[])
{
	
	unordered_map<string, int> mp;
	pair<string, int> p = make_pair("ABC", 30);
	mp.insert(p);

	mp.insert(make_pair("jhi", 89));

	mp["qwer"] = 90;

	for(auto it:mp){
		cout<<it.first<<", "<<it.second<<endl;
	}

	if(mp.find("ABC") != mp.end()){
		cout<<"found"<<endl;
	}
	else{
		cout<<"not found"<<endl;
	}

	cout<<mp.count("jhi")<<endl;
	cout<<mp.count("jji")<<endl;



	return 0;
}