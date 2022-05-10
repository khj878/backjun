#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int T;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	r(t, T) {
		int N;
		cin >> N;
		cout << N / 25 << " ";
		N %= 25;
		cout << N / 10 << " ";
		N %= 10;
		cout << N / 5 << " ";
		N %= 5;
		cout << N << "\n";
	}

	return 0;
}