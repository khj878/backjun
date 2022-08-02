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

int T;
string A, B;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	r(t, T) {
		cin >> A >> B;
		if (A.compare(B) == 0) {
			cout << "OK\n";
		}
		else {
			cout << "ERROR\n";
		}
	}

	return 0;
}