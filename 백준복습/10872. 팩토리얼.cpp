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
vector<unsigned long long> arr(13, 1);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	arr[1] = 1;
	for (int i = 2; i <= 12; i++) {
		arr[i] = arr[i - 1] * i;
	}

	cout << arr[N];

	return 0;
}