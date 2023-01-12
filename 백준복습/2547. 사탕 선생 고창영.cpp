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

long long T, N, S;
long long input;
vector<int> arr(100004, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> N;
		S = 0;
		for (int i = 0; i < N; i++) {
			cin >> input;
			S += input;
			S %= N;
		}
		if (S % N == 0) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}