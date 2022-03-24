#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int input;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int sums = 0;
	for (int i = 0; i < 5; i++) {
		cin >> input;
		if (input < 40) input = 40;
		sums += input;
		cout << sums << endl;
	}
	cout << sums / 5;

	return 0;
}