#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int A, B;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int res = 0;
	int p = 0;
	for (int i = 0; i < 10; i++) {
		cin >> A >> B;
		p += B - A;
		res = max(res, p);
	}
	cout << res;

	return 0;
}