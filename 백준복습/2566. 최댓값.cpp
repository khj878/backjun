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

	int MAX = 0;
	int idxX = -1, idxY = -1;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> N;
			if (MAX != max(MAX, N)) {
				MAX = max(MAX, N);
				idxX = i;
				idxY = j;
			}
		}
	}
	cout << MAX << "\n" << idxX + 1 << " " << idxY + 1;

	return 0;
}