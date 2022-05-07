#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 5
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

vector<double> arr(5, 0);
vector<double> input(5, 0);
int T;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	arr[0] = 350.34;
	arr[1] = 230.90;
	arr[2] = 190.55;
	arr[3] = 125.30;
	arr[4] = 180.90;

	cin >> T;
	r(i, T) {
		double sum = 0.0;
		r(j, R) {
			cin >> input[j];
			sum += input[j] * arr[j];
		}
		cout << fixed;
		cout.precision(2);
		cout << "$" << sum << "\n";
	}

	return 0;
}