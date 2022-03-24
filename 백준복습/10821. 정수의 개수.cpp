#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string S;

int main()
{
	cin >> S;
	int res = 1;
	for (int i = 0; i < S.length(); i++) {
		if (S[i] == ',') res++;
	}
	cout << res;

	return 0;
}
