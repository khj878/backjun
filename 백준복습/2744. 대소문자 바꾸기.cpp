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
	for (int i = 0; i < S.length(); i++) {
		if (S[i] >= 'A' && S[i] <= 'Z') S[i] = S[i] - 'A' + 'a';
		else if (S[i] >= 'a' && S[i] <= 'z') S[i] = S[i] - 'a' + 'A';
	}
	cout << S;

	return 0;
}