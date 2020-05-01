#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class node
{

public:
	int data;
	node* zero;
	node* one;
	int preXor;

	node(int ch) {
		data = ch;
		zero = one = NULL;
		preXor = 0;
	}
};

class trie
{
public:
	node* root;
	trie() {
		root = new node('\0');
	}


	void insert(int num) {
		node* temp = root;

		for (int i = 31; i >= 0; i--) //no. of bits in a number
		{
			int currBit = (num >> i) & 1;

			//num = 0101'0'10101 >> i => (0101'0')&1 =>value of ith bit (i.e. 0 or 1)
			if (currBit) { //currBit == 1
				if (temp->one == NULL) {
					node* bit = new node(1);
					temp->one = bit;
				}
				temp = temp->one;
			}
			else { //currBit == 0
				if (temp->zero == NULL) {
					node* bit = new node(0);
					temp->zero = bit;
				}
				temp = temp->zero;
			}
		}
		temp->preXor = num;

	}

	int XorQuery(int num) {

		node* temp = root;

		for (int k = 31; k >= 0; k--) // we will traverse msb to lsb
		{
			int currBit = (num >> k) & 1;
			if (currBit) {
				if (temp->zero) {

					temp = temp->zero;
				}
				else {
					temp = temp->one;
				}
			}
			else {
				if (temp->one) {
					temp = temp->one;
				}
				else {
					temp = temp->zero;
				}
			}
		}
		return num xor temp->preXor;

	}
};


int main()
{
	trie t;
	int n = 6;
	int arr[10] = {8, 1, 2, 12, 7, 6};
	int PrefixXor = 0;
	int maxSubarrayXor = INT_MIN;
	for (int i = 0; i < n; ++i)
	{	PrefixXor = PrefixXor xor arr[i];
		t.insert(PrefixXor);
		maxSubarrayXor = max( maxSubarrayXor, t.XorQuery(PrefixXor));
	}
	cout << maxSubarrayXor << endl;






	return 0;
}







