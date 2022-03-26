#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 101
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int N;
vector<int> arr(R, 0);
vector<int> brr(R, 0);

bool cmp(int x, int y) {
	return x > y;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	r(i, N) {
		cin >> arr[i];
	}
	r(i, N) {
		cin >> brr[i];
	}

	sort(arr.begin(), arr.begin() + N);
	sort(brr.begin(), brr.begin() + N, cmp);

	int res = 0;
	r(i, N) {
		res += arr[i] * brr[i];
	}
	cout << res;

	return 0;
}