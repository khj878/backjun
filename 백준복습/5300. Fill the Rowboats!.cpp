#include <iostream>
#include <cstdio>
#include <cmath>
#include <climits>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int N;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N;

	if (N % 6 != 0) {
		for (int i = 0; i < N; i++) {
			cout << i + 1 << " ";
			if ((i + 1) % 6 == 0) {
				cout << "Go! ";
			}
		}
		cout << "Go!";
	}

	else {
		for (int i = 0; i < N; i++) {
			cout << i + 1 << " ";
			if ((i + 1) % 6 == 0) {
				cout << "Go! ";
			}
		}
	}


	return 0;
}