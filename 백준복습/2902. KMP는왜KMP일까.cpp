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

	cin >> S;
	string res = "";
	res += S[0];
	for (int i = 1; i < S.length(); i++) {
		if (S[i] == '-' && S.length() > i + 1) {
			res += S[i + 1];
		}
	}
	cout << res;


	return 0;
}