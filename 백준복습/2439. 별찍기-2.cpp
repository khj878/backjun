#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N;

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = N - i - 1; j > 0; j--) {
			cout << " ";
		}

		for (int j = 0; j < i + 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}