#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

string S;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (true) {
		cin >> S;
		if (S == "#") {
			break;
		}

		char parity = S[S.length() - 1];
		int cntOne = 0;
		for (int i = 0; i < S.length() - 1; i++) {
			if (S[i] == '1') cntOne++;
		}

		if (parity == 'e') {
			if ((cntOne % 2) == 0) {
				S[S.length() - 1] = '0';
			}
			else {
				S[S.length() - 1] = '1';
			}
		}

		if (parity == 'o') {
			if ((cntOne % 2) == 0) {
				S[S.length() - 1] = '1';
			}
			else {
				S[S.length() - 1] = '0';
			}
		}
		cout << S << "\n";
	}


	return 0;
}