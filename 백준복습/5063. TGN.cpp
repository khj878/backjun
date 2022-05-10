#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int N, r, e, c;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	r(i, N) {
		cin >> r >> e >> c;
		if (r > e - c) {
			cout << "do not advertise\n";
		}
		else if (r < e - c) {
			cout << "advertise\n";
		}
		else {
			cout << "does not matter\n";
		}
	}

	return 0;
}