#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

string s;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> s;

	int res = 0;
	int base = 1;
	for (int i = s.length() - 1; i >= 0; i--) {
		if (s[i] >= '0' && s[i] <= '9') {
			res += base * (s[i] - '0');
		}
		else {
			res += base * (s[i] - 'A' + 10);
		}
		base *= 16;
	}
	cout << res;


	return 0;
}