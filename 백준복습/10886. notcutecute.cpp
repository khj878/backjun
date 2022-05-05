#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int N, A, B;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	int vote;
	for (int i = 0; i < N; i++) {
		cin >> vote;
		if (vote) {
			A++;
		}
		else {
			B++;
		}
	}
	if (A > B) cout << "Junhee is cute!";
	else cout << "Junhee is not cute!";

	return 0;
}