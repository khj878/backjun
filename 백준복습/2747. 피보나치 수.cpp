#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<long long> arr(46, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i <= 45; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	cout << arr[N];
	

	return 0;
}