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
int A = 100, B = 100;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	int x, y;
	r(i, N) {
		cin >> x >> y;
		if (x > y) {
			B -= x;
		}
		else if (x < y)
			A -= y;
	}
	cout << A << " " << B;

	return 0;
}