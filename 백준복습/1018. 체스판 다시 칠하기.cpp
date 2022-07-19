#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define R 1004
#define r(i, N) for(int i = 0; i < N; i++)
#define rr(i, N) for(int i = 0; i <= N; i++)

int X, Y;
int res;
vector<string> arr;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> X >> Y;
	string input;
	r(i, X) {
		cin >> input;
		arr.push_back(input);
	}


	r(i, X) {
		r(j, Y) {
			;
		}
	}

	cout << res;

	return 0;
}