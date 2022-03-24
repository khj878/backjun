#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N, input;
vector<vector <int>> arr(505, vector<int>(505, 0));
vector<vector <int>> brr(505, vector<int>(505, 0));

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i + 1; j++) {
			cin >> input;
			arr[i][j] = input;
		}
	}

	int res = 0;
	int sums = arr[0][0];
	brr[0][0] = arr[0][0];
	for (int i = 1; i < N; i++) {
		brr[i][0] = brr[i - 1][0] + arr[i][0];
		brr[i][i] = brr[i - 1][i - 1] + arr[i][i];
	}
	for (int i = 2; i < N; i++) {
		for (int j = 1; j < i; j++) {
			brr[i][j] = max(brr[i - 1][j - 1] + arr[i][j], brr[i - 1][j] + arr[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		res = max(res, brr[N - 1][i]);
	}
	cout << res;

	return 0;
}
