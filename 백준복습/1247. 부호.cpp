#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int N;
long long sum;
long long input;
vector <int> arr;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	r(t, 3) {
		cin >> N;
		sum = 0;
		r(i, N) {
			cin >> input;
			sum += input;
		}
		if (sum == 0) cout << "0\n";
		else if (sum > 0) cout << "+\n";
		else if (sum < 0) cout << "-\n";
	}

	return 0;
}