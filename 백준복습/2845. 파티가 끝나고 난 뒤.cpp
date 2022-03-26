#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int m2, P;
vector<int> arr(5, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> m2 >> P;
	for (int i = 0; i < 5; i++) {
		int input;
		cin >> input;
		cout << input - m2 * P << " ";
	}

	return 0;
}