#include <iostream>
#include <vector>
using namespace std;
bool mycompare(pair<double, pair<int, int> > a, pair<double, pair<int, int> > b) {

	return a.first > b.first;
}

int fractionalKnapsack(int* wt, int* price, int items, int Weight) {
	vector<pair<double, pair<int, int> > > v;
	int totalPrice=0;
	for (int i = 0; i < items; ++i)
	{
		pair<double, pair<int, int> > p;
		p = make_pair(price[i] / (double)wt[i], make_pair(wt[i], price[i]));
		v.push_back(p);
	}
	sort(v.begin(), v.end(), mycompare);
	int i=0;
	while (Weight > 0 && i<items)
	{	
		int currWeight = v[i].second.first;
		if(currWeight <= Weight){
			//cout<<currWeight<<" "<<v[i].second.second<<endl;
			Weight -= currWeight;
			totalPrice += v[i].second.second;
		}
		else{
			//fill your whole bag
			//cout<<currWeight<<" "<<v[i].first * Weight<<endl;
			totalPrice += (v[i].first * Weight);
			Weight =0;
		}
		i++;
	}
	return totalPrice;

}

int main(int argc, char const *argv[])
{
	int wt[10] = {2, 10, 5, 2, 1, 1};
	int price[10] = {30000, 3000, 2000, 500, 1000, 2000};
	int items = 6;
	int Weight = 13;
	cout<<fractionalKnapsack(wt, price, items, Weight)<<endl;




	return 0;
}















