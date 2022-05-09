#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int N;
vector<int> arr(5, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	r(i, N) {
		int x, y;
		cin >> x >> y;
		if (x > 0 && y > 0) {
			arr[0]++;
		}
		else if (x < 0 && y > 0) {
			arr[1]++;
		}
		else if (x > 0 && y < 0) {
			arr[3]++;
		}
		else if (x < 0 && y < 0) {
			arr[2]++;
		}
		else {
			arr[4]++;
		}
	}

	r(i, 5) {
		if (i < 4) {
			cout << "Q" << i + 1 << ": " << arr[i] << "\n";
		}
		else {
			cout << "AXIS: " << arr[i];
		}
	}

	return 0;
}