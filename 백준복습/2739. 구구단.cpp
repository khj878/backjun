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

	cin >> N;
	for (int i = 1; i < 10; i++) {
		cout << N << " * " << i << " = " << N * i << "\n";
	}

	return 0;
}