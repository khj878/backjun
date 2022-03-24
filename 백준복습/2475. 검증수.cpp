#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int input;
vector<int> arr(5, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int res = 0;
	for (int i = 0; i < 5; i++) {
		cin >> input;
		res += input * input;
	}
	cout << res % 10;

	return 0;
}