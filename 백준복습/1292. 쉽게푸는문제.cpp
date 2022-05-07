#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int A, B;
vector<int> arr(R, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> A >> B;

	int n = 1;
	int cnt = 1;
	for (int i = 1; i <= 1000; i++) {
		arr[i] += n;
		cnt++;
		if (cnt > n) {
			n++;
			cnt = 1;
		}
	}

	int sum = 0;
	for (int i = A; i <= B; i++) {
		sum += arr[i];
	}

	cout << sum;


	return 0;
}