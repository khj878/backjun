#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int T;
string S;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	r(t, T) {
		cin >> S;
		int a = 0;
		a = 26 * 26 * (S[0] - 'A') + 26 * (S[1] - 'A') + S[2] - 'A';
		int b = 0;
		b = 1000 * (S[4] - '0') + 100 * (S[5] - '0') + 10 * (S[6] - '0') + (S[7] - '0');
		if (abs(a - b) <= 100) cout << "nice\n";
		else cout << "not nice\n";
	}

	return 0;
}