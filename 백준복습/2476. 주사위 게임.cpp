#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> arr(3, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int sums = 0;
	int res = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[j];
		}
		sort(arr.begin(), arr.begin() + 3);

		if (arr[2] == arr[1]) {
			if (arr[1] == arr[0]) sums = 10000 + arr[2] * 1000;
			else sums = 1000 + arr[2] * 100;
		}
		else if (arr[1] == arr[0]) {
			if (arr[1] == arr[2]) sums = 10000 + arr[1] * 1000;
			else sums = 1000 + arr[1] * 100;
		}
		else {
			sums = max(arr[0], max(arr[1], arr[2])) * 100;
		}
		res = max(res, sums);
	}
	cout << res;

	return 0;
}