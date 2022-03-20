#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int H, M, S, D;
int res;

int main()
{
	cin >> H >> M >> S >> D;
	res = 3600 * H + 60 * M + S + D;
	res %= 86400;
	cout << res / 3600 << " ";
	res %= 3600;
	cout << res / 60 << " ";
	res %= 60;
	cout << res;

	return 0;
}