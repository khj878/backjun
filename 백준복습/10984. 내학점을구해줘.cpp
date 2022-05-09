#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int T, N;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cout << fixed;
	cout.precision(1);

	cin >> T;
	r(t, T) {
		cin >> N;
		int input1;
		double input2;
		int sum1 = 0;
		double sum2 = 0;
		r(i, N) {
			cin >> input1 >> input2;
			sum1 += input1;
			sum2 += input2 * input1;
		}
		cout << sum1 << " " << sum2 / sum1 << '\n';
	}

	return 0;
}