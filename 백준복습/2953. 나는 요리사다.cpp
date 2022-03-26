#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int input;
int idx, MAX;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 5; i++) {
		int sums = 0;
		for (int j = 0; j < 4; j++) {
			cin >> input;
			sums += input;
		}
		if (MAX < max(MAX, sums)) {
			idx = i;
			MAX = sums;
		}
	}
	cout << idx + 1 << " " << MAX;

	return 0;
}