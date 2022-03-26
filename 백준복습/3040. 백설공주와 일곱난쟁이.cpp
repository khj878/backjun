#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr(9, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int sums = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sums += arr[i];
	}

	int res1 = 0, res2 = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sums - arr[i] - arr[j] == 100) {
				res1 = i;
				res2 = j;
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		if (i != res1 && i != res2) {
			cout << arr[i] << "\n";
		}
	}

	return 0;
}