#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 101
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int N;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	int d = 7;
	int res = 12;

	if (N == 1) {
		cout << 5;
		return 0;
	}
	else if (N == 2) {
		cout << 12;
		return 0;
	}

	for (int i = 0; i < N - 2; i++) {
		d += 3;
		res += d;
		res %= 45678;
	}
	cout << res << endl;

	return 0;
}