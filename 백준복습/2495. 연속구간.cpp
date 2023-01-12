#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

string number;
int cnt, maxN;
long long a, b;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int t = 0; t < 3; t++) {
		cin >> number;
		int len = number.length();
		cnt = 0, maxN = 0;
		for (int i = 0; i < len - 1; i++) {
			if (number[i] == number[i + 1])
				cnt++;
			else
				cnt = 0;
			maxN = max(maxN, cnt);
		}
		cout << maxN + 1 << endl;
	}
	return 0;
}