#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

vector<int> arr(10, 1);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			arr[i] = 0;
		}
		else if (i == 1) {
			arr[i] = 1;
		}
		else {
			arr[i] = arr[i - 1] * i;
		}
	}

	
	while (true) {
		string s;
		cin >> s;
		if (s == "0") {
			return 0;
		}

		int res = 0;
		for (int i = s.length() - 1; i >= 0; i--) {
			res += (s[s.length() - i - 1] - '0') * arr[i + 1];
		}

		cout << res << "\n";
	}
	return 0;
}