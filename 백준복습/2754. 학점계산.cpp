#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string S;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int res = 4;
	cin >> S;
	if (S.length() == 1) {
		cout << "0.0";
	}
	else {

		if (S[1] == '-') {
			res = res - (S[0] - 'A' + 1);
			cout << res << ".7";
		}
		else {
			res = res - (S[0] - 'A');
			cout << res << ".";
			if (S[1] == '0') cout << "0";
			else if (S[1] == '+') cout << "3";
		}
	}

	return 0;
}