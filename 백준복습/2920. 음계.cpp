#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 8
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

vector<int> arr(R, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	r(i, R) {
		cin >> arr[i];
	}

	if (arr[0] == 1) {
		bool flag = true;
		for (int i = 0; i < R - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				flag = false;
				break;
			}
		}
		if (flag) cout << "ascending";
		else cout << "mixed";
	}
	else if (arr[0] == 8) {
		bool flag = true;
		for (int i = 0; i < R - 1; i++) {
			if (arr[i] < arr[i + 1]) {
				flag = false;
				break;
			}
		}
		if (flag) cout << "descending";
		else cout << "mixed";
	}
	else {
		cout << "mixed";
	}

	return 0;
}