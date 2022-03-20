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
		for (int j = N; j > 0 + i; j--) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}