#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr(1001, 0);
int A, B, N = 1;

int main()
{
	cin >> A >> B;

	int n = 1;
	for (int i = 0; i < 1000; i++) {
		arr[i] = n;
		if (n == N) {
			n++;
			N = 1;
		}
		else {
			N++;
		}
	}

	int res = 0;
	for (int i = A - 1; i < B; i++) {
		res += arr[i];
	}
	cout << res;

	return 0;
}
