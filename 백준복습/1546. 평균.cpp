#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> arr(1001, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.begin() + N);

	int M = arr[N - 1];
	double sums = 0;
	for (int i = 0; i < N; i++) {
		sums += (double)arr[i] / ((double)M * 100);
	}
	sums *= 10000;
	cout.precision(6);
	cout << sums / N;

	return 0;
}