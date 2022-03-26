#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N, K;
vector<int> arr;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) arr.push_back(i);
	}
	if (arr.size() < K) cout << "0";
	else cout << arr[K - 1];

	return 0;
}