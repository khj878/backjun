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

long long d = 9780921418000;
long long A, B, C;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> A >> B >> C;
	A *= 100;
	B *= 10;
	d += A + B + C;
	//cout << d;

	int res = 0;
	for (int i = 0; i < 13; i++) {
		if (i % 2 == 0) {
			res += d % 10;
		}
		else {
			res += (d % 10) * 3;
		}
		d /= 10;
	}
	cout << "The 1-3-sum is " << res;

	return 0;
}