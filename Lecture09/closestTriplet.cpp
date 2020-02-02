#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int arr1[10] = {1, 2, 6};
	int arr2[10] = {5, 7};
	int arr3[10] = {8, 10, 11};
	int size1 = 3, size2 = 2, size3 = 3;
	int i = 0, j = 0, k = 0;
	int minDiff = INT_MAX;
	int triplet1, triplet2, triplet3;

	while (i < size1 && j < size2 && k < size3) {

		int minimum = min(arr1[i], min(arr2[j], arr3[k]));
		int maximum = max(arr1[i], max(arr2[j], arr3[k]));
		int currDiff = maximum - minimum;

		if (currDiff < minDiff) {
			minDiff = currDiff;
			triplet1 = arr1[i];
			triplet2= arr2[j]; 
			triplet3= arr3[k]; 
		}
		if(minDiff == 0){
			break;
		}

		if(arr1[i] == minimum){
			i++;
		}
		else if(arr2[j] == minimum){
			j++;
		}
		else{
			k++;
		}
	}


	cout<<"min diff is : "<<minDiff<<endl;
	cout<<triplet1<< triplet2<<triplet3<<endl;
	return 0;
}













