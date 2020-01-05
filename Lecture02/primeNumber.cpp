#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int num;
	cin >> num;

	int divideby = 2;
	// while(divideby < num){

	// 	if(num % divideby ==0){
	// 		cout<<num<< " is composite"<<endl;
	// 		break;
	// 	}

	// 	divideby = divideby+1;

	// }
	// if(divideby == num){
	// 	cout<<num<< " is prime"<<endl;
	// }


//optimization
	int rootnum = pow(num, 0.5);
	bool isprime = true;
	while (divideby <= rootnum) {

		if (num % divideby == 0) {
			isprime = false;
			cout << num << " is composite" << endl;
			break;
		}

		divideby = divideby + 1;

	}
	if (isprime) {
		cout << num << " is prime" << endl;
	}



	return 0;
}