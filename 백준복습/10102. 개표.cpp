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
string s;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> s;
	int cntA = 0;
	int cntB = 0;
	for (int i = 0; i < N; i++) {
		if (s[i] == 'A') cntA++;
		else cntB++;
	}

	if (cntA > cntB) cout << "A";
	else if (cntA < cntB) cout << "B";
	else cout << "Tie";

	return 0;
}