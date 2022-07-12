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
string S1, S2;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	r(t, T) {
		cin >> S1 >> S2;
		int len = S1.length();
		cout << "Distances: ";
		r(i, len) {
			int tmp = S2[i] - S1[i];
			if (tmp < 0) tmp += 26;
			cout << tmp << " ";
		}
		cout << "\n";
	}


	return 0;
}