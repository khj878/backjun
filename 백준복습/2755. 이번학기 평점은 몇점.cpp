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

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s, g;
	int x;
	int ns = 0;
	double sums = 0.0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s >> x >> g;
		double f;
		if (g[1] == '+') {
			f = 0.3;
		}
		else if (g[1] == '0') {
			f = 0.0;
		}
		else if (g[1] == '-') {
			f = -0.3;
		}


		ns += x;
		if (g.length() == 1) {
			continue;
		}
		sums += ((double)x * (4.0 - ((double)(g[0]) - (double)('A')) + f));
	}

	double res = 10 * sums;
	if ((int)(res) % 10 >= 5) {
		res++;
	}
	res /= 10;
	res /= ns;
	cout << res;

	return 0;
}