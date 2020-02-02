#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n , k;
	cin >> n >> k;
	string str;
	cin >> str;

	int ans = 0, left = 0, i = 0;
	int count[2] = {0};

	while (i < n) {
		//increase character count
		count[ str[i] - 'a' ]++;

		if(min(count[0], count[1]) > k){
			count[ str[left]-'a' ]--;
			left++;
		}else{
			ans++;
		}
		i++;
	}
	cout<<ans<<endl;

	return 0;
}











