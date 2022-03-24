#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;

int main()
{
	cin >> N >> M;
	bool c1, c2;
	if (N % 2) c1 = true;
	else c1 = false;
	if (M % 2) c2 = true;
	else c2 = false;

	int res = 0;
	if (c1 == c2) {
		if (N < M) swap(N, M);
		res = (N - 1) + N * (M - 1);
	}
	else if (c1 | c2) {
		if (c1) res = (N - 1) + N * (M - 1);
		else res = (M - 1) + M * (N - 1);
	}
	else {
		if (N > M) swap(N, M);
		res = (N - 1) + N * (M - 1);
	}

	cout << res;

	return 0;
}