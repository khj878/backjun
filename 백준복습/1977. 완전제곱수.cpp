#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int N1, N2;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N1 >> N2;

	int S = 0;
	int tmp = 0;
	for (int i = 100; i >= 1; i--) {
		if (i * i >= N1 && i * i <= N2) {
			S += i * i;
			tmp = i * i;
		}
	}
	if (S != 0) cout << S << "\n" << tmp;
	else cout << -1;

	return 0;
}