#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int input;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int t = 0; t < 3; t++) {
		int res = 0;
		for (int i = 0; i < 4; i++) {
			cin >> input;
			if (input == 0) res++;
		}
		if (res == 0) cout << "E\n";
		else cout << (char)('A' + res - 1) << "\n";
	}


	return 0;
}