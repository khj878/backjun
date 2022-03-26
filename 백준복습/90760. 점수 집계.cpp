#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int T;
vector<int> arr(5, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	for (int t = 0; t < T; t++) {
		for (int i = 0; i < 5; i++) {
			cin >> arr[i];
		}
		sort(arr.begin(), arr.begin() + 5);
		if (arr[4] - arr[1] > 3) cout << "KIN\n";
		else {
			int res = 0;
			for (int i = 1; i < 4; i++) {
				res += arr[i];
			}
			cout << res << "\n";
		}
	}


	return 0;
}