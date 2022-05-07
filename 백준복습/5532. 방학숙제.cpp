#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

double L, A, B, C, D;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> L >> A >> B >> C >> D;
	double maxA = 0;
	double maxB = 0;
	if (A / C == 0) {
		maxA = A / C;
	}
	else {
		maxA = A / C + 1;
	}

	if (B / D == 0) {
		maxB = B / D;
	}
	else {
		maxB = B / D + 1;
	}

	L *= 10;
	if ((int)L % 10 >= 5) L += 10;
	L /= 10;
	
	cout << fixed;
	cout.precision(0);
	cout << L - max(maxA, maxB);

	return 0;
}