#include <iostream>
using namespace std;

int N;
int res;

int main()
{
	cin >> N;
	while (N) {
		bool chk = N & 1;
		if (chk) res++;
		N = N >> 1;
	}
	cout << res;
	return 0;
}