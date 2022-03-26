#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr(5, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int sums = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		sums += arr[i];
	}
	sort(arr.begin(), arr.begin() + 5);
	cout << sums / 5 << "\n" << arr[2];

	return 0;
}