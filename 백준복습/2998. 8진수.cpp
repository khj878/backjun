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
string pad1 = "0";
string pad2 = "00";
vector<string> oct(8, "");

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	oct[0] = "000", oct[1] = "001", oct[2] = "010", oct[3] = "011";
	oct[4] = "100", oct[5] = "101", oct[6] = "110", oct[7] = "111";

	cin >> S;
	if (S.length() % 3 == 1) {
		S = pad2 + S;
	}
	else if (S.length() % 3 == 2) {
		S = pad1 + S;
	}

	for (int i = S.length() - 1; i >= 0; i += 3) {
		string s = S.substr(s.length() - ((i + 1)) *3) - 1, s.length() - (i * 3) - 1)
		r(i, 8) {}
	}

	return 0;
}