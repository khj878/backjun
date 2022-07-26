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

	int d = 11, h = 11, m = 11;
	int D, H, M;
	int s, e;

	cin >> D >> H >> M;

	s = d * 60 * 24 + h * 60 + m;
	cin >> D >> H >> M;
	e = D * 60 * 24 + H * 60 + M;
	if (e < s) cout << -1;
	else cout << e - s;

	return 0;
}