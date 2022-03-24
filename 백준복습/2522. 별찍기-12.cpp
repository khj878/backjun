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
		for (int j = 0; j < N; j++) {
			if (j < N - i - 1) cout << " ";
			else cout << "*";
		}
		cout << "\n";
	}
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N; j++) {
			if (j < i + 1) cout << " ";
			else cout << "*";
		}
		cout << "\n";
	}
	return 0;
}