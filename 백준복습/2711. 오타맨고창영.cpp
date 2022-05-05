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
int misspell;
string s;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	r(i, T) {
		cin >> misspell >> s;
		r(i, s.length()) {
			if (i + 1 != misspell) {
				cout << s[i];
			}
			else {
				continue;
			}
		}
		cout << "\n";
	}

	return 0;
}