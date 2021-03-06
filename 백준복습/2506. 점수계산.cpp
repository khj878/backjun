#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> arr(101, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int sums = 0;
	int cnt = 1;
	for (int i = 0; i < N; i++) {
		if (arr[i]) {
			sums += cnt;
			cnt++;
		}
		else {
			cnt = 1;
		}
	}
	cout << sums;

	return 0;
}