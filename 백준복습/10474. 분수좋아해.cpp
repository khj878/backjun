#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int A, B;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (true) {
		cin >> A >> B;
		
		if (A == 0 && B == 0)
			break;

		cout << A / B << " ";
		cout << A % B << " / " << B << "\n";
	}
	return 0;
}