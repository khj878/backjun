#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int X, Y, W, H;
int res;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> X >> Y >> W >> H;

	cout << min(min(min(X,0), min(X,W)),min( min(min(X,H), min(Y,0)), min(min(Y, W), min(Y, H))));

	return 0;
}