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
vector<int> arr(3, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	arr[0] = 1;
	cin >> N;
	int x, y;
	r(i, N) {
		cin >> x >> y;
		swap(arr[x - 1], arr[y - 1]);
	}
	for (int i = 0; i < 3; i++) {
		if (arr[i] == 1) {
			cout << i + 1;
			break;
		}
	}

	return 0;
}