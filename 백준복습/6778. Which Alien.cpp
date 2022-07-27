#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int A, E;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> A >> E;
	if (A >= 6) {
		if (E >= 2) cout << "TroyMartian";
	}
	else if (A >= 3) {
		if (E <= 4) cout << "VladSaturnian";
	}
	else if (A >= 2) {
		if (E <= 3) cout << "GraemeMercurian";
	}

	return 0;
}


/*
TroyMartian, who has at least 3 antenna and at most 4 eyes;
VladSaturnian, who has at most 6 antenna and at least 2 eyes;
GraemeMercurian, who has at most 2 antenna and at most 3 eyes.
*/