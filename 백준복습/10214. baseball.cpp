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
		int Y = 0, K = 0;
		int n1, n2;
		r(i, 9) {
			cin >> n1 >> n2;
			Y += n1;
			K += n2;
		}
		if (Y > K) cout << "Yonsei\n";
		else if (Y < K) cout << "Korea\n";
		else cout << "Draw";
	}

	return 0;
}