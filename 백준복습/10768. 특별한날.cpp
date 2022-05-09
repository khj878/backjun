#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int M, D;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> M >> D;
	if (M == 2) {
		if (D > 18) {
			cout << "After";
		}
		else if (D < 18) {
			cout << "Before";
		}
		else if(D == 18) {
			cout << "Special";
		}
	}
	else if (M < 2) {
		cout << "Before";
	}
	else if (M > 2) {
		cout << "After";
	}

	return 0;
}