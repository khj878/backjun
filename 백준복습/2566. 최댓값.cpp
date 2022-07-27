#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

vector<vector<int>> arr(9, vector<int>(9, 0));

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int maxValue = arr[0][0];
	int idxX = 0;
	int idxY = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
		}
	}


	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (arr[i][j] >= maxValue) {
				maxValue = arr[i][j];
				idxX = i;
				idxY = j;
			}
		}
	}
	cout << maxValue << "\n";
	cout << idxX + 1 << " " << idxY + 1;


	return 0;
}