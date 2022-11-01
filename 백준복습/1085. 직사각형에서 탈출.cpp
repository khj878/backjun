#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int x, y, w, h;
int minX, minY;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> x >> y >> w >> h;
	minX = min(x, w - x);
	minY = min(y, h - y);
	int res = min(minX, minY);
	cout << res;

	return 0;
}