#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 101
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)
vector<vector<int>> arr(R, vector<int>(R, 0));

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x1, x2, y1, y2;
	r(i, R) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = x1; i < x2; i++) {
			for (int j = y1; j < y2; j++) {
				arr[i][j] = 1;
			}
		}
	}

	int res = 0;
	r(i, R) {
		r(j, R) {
			if (arr[i][j] == 1) res++;
		}
	}
	cout << res;

	return 0;
}