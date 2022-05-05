#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

vector<int> arr(10, 0);
vector<int> brr(10, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	r(i, 10) {
		cin >> arr[i];
	}
	r(i, 10) {
		cin >> brr[i];
	}

	int res1 = 0;
	int res2 = 0;

	for (int i = 0; i < 10; i++) {
		if (arr[i] > brr[i]) res1 += 3;
		else if (arr[i] < brr[i]) res2 += 3;
		else res1++, res2++;
	}

	cout << res1 << " " << res2 << "\n";
	if (res1 > res2) cout << "A";
	else if (res1 < res2) cout << "B";
	else {
		if (arr[9] > brr[9]) cout << "A";
		else if (arr[9] < brr[9]) cout << "B";
		else cout << "D";
	}

	return 0;
}