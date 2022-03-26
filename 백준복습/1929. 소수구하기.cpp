#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1000001
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int N, M;
vector<bool> arr(1000001, true);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 2; i * i <= R; i++) {
		if (arr[i])
			for (int j = i * i; j <= R; j += i)
				arr[j] = false;
	}

	cin >> N >> M;
	for (int i = N; i <= M; i++) {
		if (arr[i]) {
			cout << i << "\n";
		}
	}

	return 0;
}