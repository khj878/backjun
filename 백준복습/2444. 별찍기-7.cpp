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
		for (int j = N - 1; j > i; j--) {
			cout << " ";
		}
		for (int j = 0; j < 2 * (i + 1) - 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << " ";
		}
		for (int j = 4; j < 2 * N - 2 * i + 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}