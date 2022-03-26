#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 101
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int T, N;
string S;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	r(t, T) {
		cin >> N >> S;
		string res = "";
		r(i, S.length()) {
			r(j, N) {
				res.push_back(S[i]);
			}
		}
		cout << res << "\n";
	}

	return 0;
}