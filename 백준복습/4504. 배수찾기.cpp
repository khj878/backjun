#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int N;
int C;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	while (true) {
		cin >> C;

		if (C == 0)
			break;

		if (C % N == 0) cout << C << " is a multiple of " << N << ".\n";
		else cout << C << " is NOT a multiple of " << N << ".\n";
	}
	return 0;
}