#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long N, M;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	cout << abs(N - M);

	return 0;
}