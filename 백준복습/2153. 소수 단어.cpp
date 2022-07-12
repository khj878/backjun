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
int N;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> S;
	int len = S.length();
	r(i, len) {
		if (S[i] >= 'a' && S[i] <= 'z') N += S[i] - 'a' + 1;
		else if (S[i] >= 'A' && S[i] <= 'Z') N += S[i] - 'A' + 27;
	}

	bool flag = true;
	for (int i = 2; i < N; i++) {
		if (N % i == 0) {
			flag = false;
			break;
		}
	}

	if (flag) cout << "It is a prime word.";
	else cout << "It is not a prime word.";

	return 0;
}