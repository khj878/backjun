#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int sum = 0;
	vector<int> arr(101, 0);
	r(i, 10) {
		int input;
		cin >> input;
		sum += input;
		arr[input / 10]++;
	}

	int maxIdx = 0;
	int maxValue = 0;
	for (int i = 0; i < 101; i++) {
		if (arr[maxIdx] < arr[i]) {
			maxIdx = i;
			maxValue = arr[i];
		}
	}

	cout << sum / 10 << "\n" << maxValue * 10;

	return 0;
}