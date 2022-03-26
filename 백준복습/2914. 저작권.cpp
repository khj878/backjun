#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int input;
vector<int> arr(42, 0);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 10; i++) {
		cin >> input;
		arr[input % 42]++;
	}

	int res = 0;
	for (int i = 0; i < 42; i++) {
		if (arr[i]) res++;
	}
	cout << res;

	return 0;
}