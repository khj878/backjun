#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int T;
string s1, s2;
int n1, n2;
stringstream ss1, ss2, ss3;
int res; 
string r;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> s1;
		s2 = s1;
		reverse(s1.begin(), s1.end());
		ss1 << s1;
		ss2 << s2;
		ss1 >> n1;
		ss2 >> n2;
		res = n1 + n2;
		//cout << res << endl;
		ss3 << res;
		ss3 >> r;
		ss1.clear();
		ss2.clear();

		bool flag = true;
		for (int i = 0; i < r.length() / 2; i++) {
			if (r[i] != r[r.length() - i - 1]) {
				flag = false;
				break;
			}
		}
		if (flag) cout << "YES\n";
		else cout << "NO\n";
		ss3.clear();
	}

	return 0;
}