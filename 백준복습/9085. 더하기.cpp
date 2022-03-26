#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int T, N;
int input;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	for (int t = 0; t < T; t++) {
		int res = 0;
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> input;
			res += input;
		}
		cout << res << "\n";
	}

	return 0;
}