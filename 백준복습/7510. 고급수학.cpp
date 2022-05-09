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

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	r(t, T) {
		vector<int> arr(3, 0);
		r(i, 3) {
			cin >> arr[i];
		}
		sort(arr.begin(), arr.begin() + 3);

		cout << "Scenario #" << t + 1 << ":\n";
		if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
		cout << "\n";
	}

	return 0;
}