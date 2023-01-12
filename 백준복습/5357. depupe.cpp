#include <iostream>
#include <cstdio>
#include <cmath>
#include <climits>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int N;
string S;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> S;
		for (int i = 0; i < S.length(); i++) {
			if (S[i] == S[i + 1]) {
				S.erase(S.begin() + i + 1);
				i--;
				//cout << S << "\n";
			}
		}
		cout << S << "\n";
	}
	return 0;
}