#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int T;
string input;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	r(t, T) {
		cin >> input;
		int len = input.length();
		if (input[len / 2 - 1] == input[len / 2]) cout << "Do-it\n";
		else cout << "Do-it-Not\n";
	}
	return 0;
}