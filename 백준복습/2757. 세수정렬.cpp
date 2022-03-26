#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr(3, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.begin() + 3);
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}