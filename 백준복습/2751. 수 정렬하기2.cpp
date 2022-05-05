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
vector<int> arr(1000004, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	r(i, N) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.begin() + N);
	r(i, N) {
		cout << arr[i] << "\n";
	}

	return 0;
}