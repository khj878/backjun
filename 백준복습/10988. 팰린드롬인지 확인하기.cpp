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

	cin >> S;
	bool flag = false;
	r(i, S.length() / 2 - 1) {
		if (S[i] != S[S.length() - i - 1]) {
			flag = true;
			break;
		}
	}
	if (flag) cout << 0;
	else cout << 1;

	return 0;
}