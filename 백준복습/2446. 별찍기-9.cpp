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
		for (int j = i; j > 0; j--) {
			cout << " ";
		}

		for (int j = 2 * i; j < 2 * N - 1; j++) {
			cout << "*";
		}

		cout << "\n";
	}

	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - i - 2; j++) {
			cout << " ";
		}

		for (int j = 0; j < 2 * i + 3; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}