#include <iostream>
#include <cstdio>
#include <cmath>
#include <climits>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int N, M, K;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N >> M >> K;
	while(K) {
		if (N / 2 >= M) {
			N--;
		}
		else {
			M--;
		}
		K--;
	}
	cout << min(N / 2, M);
	return 0;
}