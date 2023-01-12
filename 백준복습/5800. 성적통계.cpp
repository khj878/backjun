#include <iostream>
#include <cstdio>
#include <cmath>
#include <climits>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int T, N, intMin;
vector<int> arr(104, 0);
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	for (int t = 0; t < T; t++) {
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> arr[i];
		}
		intMin = INT_MIN;
		sort(arr.begin(), arr.begin() + N);

		for (int i = 0; i < N - 1; i++) {
			if (abs(arr[i + 1] - arr[i]) > intMin) {
				intMin = abs(arr[i + 1] - arr[i]);
			}
		}

		cout << "Class " << t + 1 << "\n";
		cout << "Max " << arr[N - 1] << ", Min " << arr[0] << ", Largest gap " << intMin << "\n";
	}

	return 0;
}