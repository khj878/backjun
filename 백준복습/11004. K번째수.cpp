#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int N, K;
vector<int> arr(5000005, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> K;
	r(i, N) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.begin() + N);
	cout << arr[K - 1];

	return 0;
}