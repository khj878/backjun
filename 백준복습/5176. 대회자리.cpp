#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int T, P, M;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	r(t, T) {
		cin >> P >> M;
		vector<bool> arr(505, 0);
		int res = 0;
		r(i, P) {
			int input;
			cin >> input;
			if (!arr[input - 1]) {
				arr[input - 1] = true;
			}
			else {
				res++;
			}
		}
		cout << res << endl;
	}

	return 0;
}