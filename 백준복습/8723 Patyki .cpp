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

vector<int> arr(3, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	r(i, 3) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.begin() + 3);
	if (arr[0] == arr[1] && arr[1] == arr[2]) cout << 2;
	else if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) cout << 1;
	else cout << 0;

	return 0;
}