#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int A, B, C;
vector<int> arr(10, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> A >> B >> C;
	int res = A * B * C;
	while (res) {
		arr[res % 10]++;
		res /= 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}

	return 0;
}