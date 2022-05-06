#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

vector<string> s1(5, "");
vector<string> s2(5, "");

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int maxLen = 0;
	r(i, 5) {
		cin >> s1[i];
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (s1[j][i] != NULL)
				cout << s1[j][i];
		}
	}

	return 0;
}