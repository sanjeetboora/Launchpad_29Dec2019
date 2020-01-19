#include<iostream>
using namespace std;
//int sum(int a, int b){
// int sum(int& a, int b){
// 	a = a + b;
// 	cout<<"inside sum function"<<endl;
// 	cout<<a<<endl;
// 	return a;

// }
//int sum(int* aptr, int b, int arr[10]){
int sum(int* aptr, int b, int arr){
	*aptr = *aptr + b;
	cout<<"inside sum function"<<endl;
	//cout<<arr[0]<<", "<<arr[1]<<", "<<arr[2]<<endl;
	//cout<<*aptr<<endl;
	return *aptr;

}
int main(int argc, char const *argv[])
{	int arr[10] = {1,2,3};
	int a =2;
	int b =3;
	//int result = sum(&a,b,arr);
	cout<<"inside main function"<<endl;
	// cout<<result<<endl;
	// cout<<a<<endl;
	// cout<<b<<endl;
	// cout<<arr<<endl;
	// cout<<&arr[0]<<endl;
	// cout<<arr+1<<endl;
	// cout<<&arr[1]<<endl;

	// cout<<arr[1]<<endl;
	// cout<<*(arr+1)<<endl;
	// cout<<*(arr+2)<<endl;

	int* aptr = &a;

	int** aaptr = &aptr;

	cout<<aptr<<endl;
	cout<<aaptr<<endl;
	cout<<*aptr<<endl;
	cout<<**aaptr<<endl;




	return 0;
}
















