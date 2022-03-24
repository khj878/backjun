#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string S, st;
bool flag = true;
int H = 10;

int main()
{
	cin >> S;
	for (int i = 1; i < S.length(); i++) {
		if (S[i] != S[i - 1]) H += 10;
		else H += 5;
	}
	cout << H << endl;

	return 0;
}