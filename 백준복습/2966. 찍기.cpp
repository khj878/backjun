#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

string A = "ABC";
string B = "BABC";
string G = "CCAABB";
string input;
int len;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> len >> input;
	int cntA = 0;
	int cntB = 0;
	int cntG = 0;
	r(i, len) {
		if (A[i % 3] == input[i]) cntA++;
		if (B[i % 4] == input[i]) cntB++;
		if (G[i % 6] == input[i]) cntG++;
	}
	int res = max(cntA, max(cntB, cntG));
	cout << res << "\n";
	if (res == cntA) cout << "Adrian\n";
	if (res == cntB) cout << "Bruno\n";
	if (res == cntG) cout << "Goran\n";

	return 0;
}