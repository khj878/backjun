#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

vector<int> arr(9, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	r(i, 9) {
		cin >> arr[i];
	}

	int sums = 0;
	r(i, 9) {
		sums += arr[i];
	}

	int res1 = 0;
	int res2 = 0;
	r(i, 9) {
		bool flag = false;
		sums -= arr[i];
		for (int j = i + 1; j < 9; j++) {
			if (sums - arr[j] == 100) {
				res1 = i;
				res2 = j;
				flag = true;
				break;
			}
		}
		sums += arr[i];
	}

	res1 = arr[res1];
	res2 = arr[res2];
	sort(arr.begin(), arr.begin() + 9);

	for (int i = 0; i < 9; i++) {
		if (arr[i] == res1 || arr[i] == res2) {
			;
		}
		else {
			cout << arr[i] << "\n";
		}
	}
	return 0;
}