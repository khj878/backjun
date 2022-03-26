#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int MAX = 0, idx = -1;
	for (int i = 0; i < 9; i++) {
		cin >> N;
		if (MAX != max(MAX, N)) {
			MAX = max(MAX, N);
			idx = i;
		}
	}
	cout << MAX << "\n" << idx + 1;

	return 0;
}