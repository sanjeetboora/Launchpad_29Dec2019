#include <iostream>
using namespace std;

int search(int arr[10], int key){
	int result = -1;
	for (int i = 0; i < 10; ++i)
	{
		if(arr[i] == key){
			cout<<"found"<<endl;
			result = i;
			break;
			//return result;
		}
	}
	return result;
}


int main(int argc, char const *argv[])
{
	int arr[10] = {10,20,58,3,4,90,7,52,1,100};
	int key = 11;
    int ans = search(arr, key);

    if(ans != -1){
    	cout<<key<<" found at index "<<ans<<endl;
    } 
    else{
    	cout<<key <<" not found"<<endl;
    }

	return 0;
}





