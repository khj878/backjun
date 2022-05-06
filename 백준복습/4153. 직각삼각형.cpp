#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

vector<int> arr(3, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (true) {
		for (int i = 0; i < 3; i++)
			cin >> arr[i];

		if ((arr[0] == 0 && arr[1] == 0 && arr[2] == 0)) {
			break;
		}

		sort(arr.begin(), arr.begin() + 3);

		int ab = arr[0] * arr[0] + arr[1] * arr[1];
		int c = arr[2] * arr[2];
		if (ab == c) cout << "right\n";
		else cout << "wrong\n";
	}
	return 0;
}