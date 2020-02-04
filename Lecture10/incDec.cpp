#include <iostream>
using namespace std;

void dec(int n) {
	if (n == 0) { //base case
		return;
	}

	cout << n << endl;
	dec(n - 1);

}
void inc(int n) {
	if (n == 0) {
		return;
	}

	inc(n - 1);
	cout << n << endl;

}

void decInc(int n) {
	if (n == 0) {
		return;
	}
	cout << n << endl;
	decInc(n - 1);
	cout << n << endl;
}

void incDec(int n, int i) {
	if (i>n) {
		return;
	}
	cout << i<< endl;
	incDec(n, i+1);
	cout << i<< endl;
}


int main(int argc, char const *argv[])
{
	int num;
	cin >> num;

	//dec(num);
	//inc(num);
	//decInc(num);
	incDec(num, 1);


	return 0;
}












