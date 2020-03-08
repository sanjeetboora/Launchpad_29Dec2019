#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v;
	vector<pair<int, string> > v1;

	// v.push_back(10);
	// v.push_back(30);
	// v.push_back(40);
	// v.push_back(20);
	// v.push_back(40);
	// v.push_back(20);
	// v.erase(v.begin(),v.begin()+1);
	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;


	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	cout << v[i] << endl;
	// }
	// sort(v.begin(), v.end());
	// cout << "-------" << endl;
	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	cout << v[i] << endl;
	// }

	pair<int, string> p;

	p = make_pair(10, "abc");
	cout<<p.first<<", "<<p.second<<endl;
	p.first = 20;
	cout<<p.first<<", "<<p.second<<endl;
	v1.push_back(p);
	v1.push_back(make_pair(20, "abc"));
	 for (int i = 0; i < v1.size(); ++i)
	{
		cout << v1[i].first<<" "<<v1[i].second << endl;
	}






	return 0;
}










