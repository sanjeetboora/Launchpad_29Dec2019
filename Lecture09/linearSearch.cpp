#include <bits/stdc++.h>
using namespace std;
bool linearSearch(int* arr, int n, int key){
	if(n == 0){
		return false;
	}
	//recursive call -> linearSearch(arr+1, n-1, key)
	if(arr[0] == key || linearSearch(arr+1, n-1, key)){
		return true;
	}
	return false;

}


int main(int argc, char const *argv[])
{
	int arr[10] = {11,1, 2, 5,10};
	int n =5;
	int key = 12;

	if(linearSearch(arr, n, key)){
		cout<<key<<"found"<<endl;
	}
	else{
		cout<<key<<" not found"<<endl;
	}
}