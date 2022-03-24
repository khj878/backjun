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

	cin >> input;
	vector<int> res(3, 0);
	res[0] = input / 300;
	input %= 300;
	res[1] = input / 60;
	input %= 60;
	res[2] = input / 10;
	input %= 10;

	if (input) {
		cout << -1;
	}
	else {
		for (int i = 0; i < 3; i++) {
			cout << res[i] << " ";
		}
	}

	return 0;
}