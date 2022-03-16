#include <iostream>
using namespace std;

int H, M, N;
int res;

int main()
{
	cin >> H >> M;
	cin >> N;
	res = H * 60 + M + N;
	res %= 1440;
	cout << res / 60 << " ";
	res %= 60;
	cout << res;
	return 0;
}