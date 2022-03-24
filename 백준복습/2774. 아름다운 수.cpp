#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int T;
string S;
vector<int> arr(10, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> S;
		
		int res = 0;
		for (int i = 0; i < S.length(); i++) {
			arr[S[i] - '0']++;
		}

		for (int i = 0; i < 10; i++) {
			if (arr[i]) res++;
		}

		cout << res << "\n";
		fill(arr.begin(), arr.end(), 0);
	}

	return 0;
}